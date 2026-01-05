This problem asks us to find the lexicographically largest permutation of an array that can be achieved with at most `k` swaps.

### Core Idea: A Greedy Approach

"Lexicographically largest" means we want the biggest numbers to appear as early as possible in the array. This suggests a greedy strategy:

1.  **Process the array from left to right (from index 0 to `n-1`).**
2.  For the first position (index 0), we want the largest possible number, which is `n`.
3.  For the second position (index 1), we want the second-largest number, `n-1`.
4.  In general, for position `i`, the ideal number is `n-i`.

Our greedy algorithm will try to place the correct number at each position, one by one, using our limited swaps.

### Algorithm Steps

1.  **Iterate from Left to Right:** Start at index `i = 0`.
2.  **Identify the Target:** For the current index `i`, the target value is `n - i`.
3.  **Check and Swap:**
    *   Look at the number currently at `arr[i]`.
    *   If it's already the target value (`arr[i] == n - i`), that's great! This position is already optimal. We don't need to use a swap. Move to the next index `i + 1`.
    *   If it's *not* the target value, we need to bring the target value to this position. Find the index where the target value (`n-i`) is currently located. Swap the element at `arr[i]` with the target value. This costs one swap, so decrement `k`.
4.  **Stopping Conditions:**
    *   We continue this process until we either run out of swaps (`k == 0`) or we have checked every position in the array.

### Optimization for Performance

A naive implementation would search for the target value's index in each step of the loop. This search would take O(n) time, leading to an overall complexity of O(k\*n), which might be too slow given the constraints (`n` up to 10^5).

To make finding the target value's index instantaneous (O(1)), we can pre-process the array and create a **position map** (a dictionary or hash map). This map will store each number and its current index: `position_map[value] = index`.

### Refined Algorithm with Position Map

1.  **Initialization:** Create a `position_map` that maps each value in `arr` to its index. This takes O(n) time.
2.  **Iterate:** Loop with an index `i` from `0` to `n-1`. Inside the loop, check if you still have swaps left (`k > 0`).
3.  **Find Target:** The target value for index `i` is `n - i`.
4.  **Check if Swap is Needed:** If `arr[i]` is not the `target_value`:
    a. Get the value currently at `arr[i]`. Let's call it `current_val`.
    b. Use the `position_map` to find the index of the `target_value` in O(1) time: `target_idx = position_map[target_value]`.
    c. Swap `arr[i]` and `arr[target_idx]`.
    d. **Crucially, update the `position_map`** to reflect the swap. The `current_val` is now at `target_idx`, and the `target_value` is now at `i`.
    e. Decrement `k`.
5.  **Move to the next position `i+1`**.
6.  **Return** the modified `arr`.

### Python Implementation

```python
import sys

def largestPermutation(k, arr):
    """
    Finds the largest lexicographical permutation of an array with at most k swaps.

    Args:
        k (int): The maximum number of swaps allowed.
        arr (list[int]): An array of unique integers from 1 to n.

    Returns:
        list[int]: The largest possible permutation.
    """
    n = len(arr)
    
    # Create a map from a value to its index for O(1) lookups.
    # This is the key optimization.
    pos_map = {val: i for i, val in enumerate(arr)}

    # Iterate through the array from left to right.
    i = 0
    # Stop if we run out of swaps or reach the end of the array.
    while k > 0 and i < n:
        # The ideal value for the current position 'i' is n - i.
        target_val = n - i

        # If the current element is already the largest possible for this position,
        # we don't need to swap. Move to the next position.
        if arr[i] == target_val:
            i += 1
            continue

        # If not, we perform a swap.
        
        # 1. Get the value and index of the elements to be swapped.
        current_val = arr[i]
        target_idx = pos_map[target_val]

        # 2. Perform the swap in the array.
        arr[i], arr[target_idx] = arr[target_idx], arr[i]

        # 3. IMPORTANT: Update the position map for the two swapped values.
        pos_map[current_val] = target_idx
        pos_map[target_val] = i

        # 4. Decrement the number of available swaps.
        k -= 1
        
        # 5. Move to the next position.
        i += 1

    return arr

# Example of how to run this code based on HackerRank's boilerplate
if __name__ == '__main__':
    # This part is for running locally or on HackerRank
    # You would typically get this input from stdin
    
    # Sample Input 0
    # nk = '5 1'.split()
    # arr_str = '4 2 3 5 1'.split()
    
    # Sample Input 1
    # nk = '3 1'.split()
    # arr_str = '2 1 3'.split()

    # Reading from standard input
    try:
        nk = input().split()
        n = int(nk[0])
        k = int(nk[1])
        arr = list(map(int, input().rstrip().split()))
        
        result = largestPermutation(k, arr)
        
        # Printing the result as space-separated integers
        print(' '.join(map(str, result)))
        
    except (IOError, EOFError):
        pass # To handle running in environments without stdin
```