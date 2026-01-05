An excellent way to solve this problem is to implement the well-known "next permutation" algorithm. This algorithm finds the next lexicographically greater permutation of a sequence in a very efficient manner.

### Algorithm Explained

Let's take the example `dkhc` and walk through the steps to find the next greater permutation, `hcdk`.

1.  **Find the "Pivot":** Start from the right end of the word and find the first character that is smaller than the character to its immediate right. This character is our "pivot".
    *   `d k h c`
    *   `c`: Nothing to its right.
    *   `h`: To its right is `c`. Is `h < c`? No.
    *   `k`: To its right is `h`. Is `k < h`? No.
    *   `d`: To its right is `k`. Is `d < k`? Yes!
    *   So, `d` is our pivot. Let's say its index is `i`.

2.  **Special Case (No Answer):** If we scan the entire word from right to left and don't find such a pivot, it means the word is already sorted in descending order (e.g., `dcba`). This is the largest possible permutation, so no greater one exists. In this case, we return "no answer".

3.  **Find the "Successor" to the Pivot:** Now, look at the part of the string to the right of the pivot (`khc`). Find the smallest character in this part that is still greater than the pivot (`d`).
    *   `k h c`
    *   `c` is not greater than `d`.
    *   `h` is greater than `d`.
    *   `k` is greater than `d`.
    *   The smallest of these is `h`. This is our "successor". Let's say its index is `j`.

4.  **Swap the Pivot and Successor:** Swap the pivot (`d`) with its successor (`h`).
    *   `d k h c` -> `h k d c`

5.  **Sort the Suffix:** Take the part of the string to the right of the original pivot's position (the suffix) and sort it in ascending order. This ensures we get the *smallest* possible new permutation. A neat trick is that since the suffix was already in descending order, we can simply reverse it to sort it ascendingly.
    *   The suffix is `k d c`.
    *   Reversing it gives `c d k`.
    *   Combine with the prefix: `h` + `c d k` -> `hcdk`.

This is our final answer.

### Python Implementation

Here is the Python code that implements this algorithm.

```python
import math
import os
import random
import re
import sys

#
# Complete the 'biggerIsGreater' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING w as a parameter.
#

def biggerIsGreater(w):
    """
    Finds the next lexicographically greater permutation of a string.
    """
    # Convert the string to a list of characters for mutable operations.
    chars = list(w)
    n = len(chars)

    # 1. Find the rightmost character that is smaller than the character to its right.
    #    This is our "pivot".
    pivot_index = -1
    for i in range(n - 2, -1, -1):
        if chars[i] < chars[i+1]:
            pivot_index = i
            break

    # 2. If no such character is found, the string is the last permutation.
    if pivot_index == -1:
        return "no answer"

    # 3. Find the smallest character to the right of the pivot that is
    #    greater than the pivot.
    successor_index = -1
    for j in range(n - 1, pivot_index, -1):
        if chars[j] > chars[pivot_index]:
            successor_index = j
            break

    # 4. Swap the pivot with its successor.
    chars[pivot_index], chars[successor_index] = chars[successor_index], chars[pivot_index]

    # 5. Reverse the suffix starting after the pivot's original position.
    #    This sorts the suffix in ascending order efficiently.
    left = pivot_index + 1
    right = n - 1
    while left < right:
        chars[left], chars[right] = chars[right], chars[left]
        left += 1
        right -= 1

    # 6. Join the list of characters back into a string.
    return "".join(chars)

if __name__ == '__main__':
    # This part is for running the code locally with standard input,
    # as you would on a platform like HackerRank.
    try:
        fptr = open(os.environ['OUTPUT_PATH'], 'w')
    except KeyError:
        # If not running in HackerRank environment, use standard output.
        fptr = sys.stdout

    T = int(input().strip())

    for T_itr in range(T):
        w = input()

        result = biggerIsGreater(w)

        fptr.write(result + '\n')

    if fptr != sys.stdout:
        fptr.close()
```