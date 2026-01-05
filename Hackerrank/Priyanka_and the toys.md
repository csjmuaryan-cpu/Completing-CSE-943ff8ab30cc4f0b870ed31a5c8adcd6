Of course. This is a classic problem that can be solved efficiently with a greedy algorithm. The key insight is to process the toys in a specific order.

### Problem Breakdown and Strategy

1.  **The Goal:** Minimize the number of containers.
2.  **The Rule:** For any container, all items must have a weight less than or equal to `(minimum_weight_in_container + 4)`.
3.  **Greedy Insight:** To pack as many items as possible into one container, we should always start a new container with the lightest available toy. This sets the `minimum_weight` for that container, giving us the widest possible weight range (`minimum_weight` to `minimum_weight + 4`) to fit subsequent toys.

This leads to a simple and effective greedy strategy:

1.  **Sort:** Sort all the toy weights in ascending order.
2.  **Iterate and Pack:**
    *   Start with the first (lightest) toy. This requires one container. Establish the weight limit for this container: `limit = weight_of_first_toy + 4`.
    *   Iterate through the rest of the sorted toys.
    *   For each toy, check if its weight is within the current container's limit.
    *   If it is, continue to the next toy. It fits!
    *   If its weight *exceeds* the limit, it cannot go into the current container. We must start a new container. Increment the container count, and set a new weight limit based on this toy's weight: `new_limit = current_toy_weight + 4`.
3.  **Count:** The final count of containers is the answer.

### Walkthrough with Sample Input

Let's apply this to the sample input: `w = [1, 2, 3, 21, 7, 12, 14, 21]`

1.  **Sort `w`:** `[1, 2, 3, 7, 12, 14, 21, 21]`

2.  **Initialize:**
    *   Take the first toy, weight `1`. We need a container for it.
    *   `containers = 1`
    *   The weight limit for this first container is `1 + 4 = 5`.

3.  **Iterate:**
    *   Next toy is `2`. Is `2 <= 5`? Yes. It fits.
    *   Next toy is `3`. Is `3 <= 5`? Yes. It fits.
    *   Next toy is `7`. Is `7 <= 5`? No. It doesn't fit.
        *   We need a new container. `containers` becomes `2`.
        *   The new weight limit is set by this toy: `limit = 7 + 4 = 11`.
    *   Next toy is `12`. Is `12 <= 11`? No. It doesn't fit.
        *   We need a new container. `containers` becomes `3`.
        *   The new weight limit is set by this toy: `limit = 12 + 4 = 16`.
    *   Next toy is `14`. Is `14 <= 16`? Yes. It fits.
    *   Next toy is `21`. Is `21 <= 16`? No. It doesn't fit.
        *   We need a new container. `containers` becomes `4`.
        *   The new weight limit is set by this toy: `limit = 21 + 4 = 25`.
    *   Next toy is `21`. Is `21 <= 25`? Yes. It fits.

4.  **End of List:** We have processed all toys. The final count is `4`.

### Python Implementation

Here is the Python code that implements this greedy strategy.

```python
import math
import os
import random
import re
import sys

#
# Complete the 'toys' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY w as a parameter.
#

def toys(w):
    """
    Calculates the minimum number of containers required to ship toys.
    
    Args:
        w: A list of integers representing toy weights.
    
    Returns:
        The minimum number of containers.
    """
    # If there are no toys, no containers are needed.
    if not w:
        return 0

    # Sort the weights in ascending order. This is the core of the greedy strategy.
    w.sort()

    # Initialize the number of containers to 1 for the first toy.
    containers = 1
    
    # The first toy sets the weight limit for the first container.
    # Any toy in this container must weigh at most w[0] + 4.
    current_limit = w[0] + 4

    # Iterate through the rest of the toys.
    for weight in w:
        # If the current toy's weight exceeds the limit of the current container...
        if weight > current_limit:
            # ...we must start a new container.
            containers += 1
            # This toy becomes the first item in the new container, setting a new limit.
            current_limit = weight + 4
            
    return containers

if __name__ == '__main__':
    # This part is for running the code locally with standard input,
    # as you would on a platform like HackerRank.
    try:
        fptr = open(os.environ['OUTPUT_PATH'], 'w')
    except KeyError:
        # If not running in HackerRank environment, use standard output.
        fptr = sys.stdout

    n = int(input().strip())

    w = list(map(int, input().rstrip().split()))

    result = toys(w)

    fptr.write(str(result) + '\n')

    if fptr != sys.stdout:
        fptr.close()
```