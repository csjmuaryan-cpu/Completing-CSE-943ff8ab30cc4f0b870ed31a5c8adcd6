Excellent choice. This is a classic computational geometry problem where a naive simulation is too slow, requiring a more clever, calculation-based approach.

### Problem Analysis and Strategy

The key constraints are that the board size `n` can be very large (up to 10^9), while the number of obstacles `k` is relatively small (up to 10^5). This is a strong hint that a solution whose complexity depends on `n` (like simulating each move one by one) will be too slow. The solution must primarily depend on `k`.

The strategy is to:
1.  **Calculate Maximum Reach:** For each of the 8 directions (up, down, left, right, and the 4 diagonals), calculate the maximum number of squares the queen could attack if there were no obstacles. This is simply the distance from the queen to the edge of the board in that direction.
2.  **Identify Closest Obstacles:** For each of the 8 directions, find the single closest obstacle that lies on that path.
3.  **Update Reach:** The actual number of squares the queen can attack in a given direction is limited by either the board edge or the closest obstacle. Therefore, for each direction, the number of attackable squares is `distance_to_closest_obstacle - 1`.
4.  **Sum the Results:** The total number of attackable squares is the sum of the attackable squares from all 8 directions.

### Detailed Algorithm

1.  **Initialization:**
    *   Start by calculating the maximum number of moves in each of the 8 directions, assuming an empty board.
        *   **Up:** `n - r_q`
        *   **Down:** `r_q - 1`
        *   **Right:** `n - c_q`
        *   **Left:** `c_q - 1`
        *   **Up-Right:** `min(n - r_q, n - c_q)`
        *   **Up-Left:** `min(n - r_q, c_q - 1)`
        *   **Down-Right:** `min(r_q - 1, n - c_q)`
        *   **Down-Left:** `min(r_q - 1, c_q - 1)`
    *   We will store these 8 values and treat them as the current maximums.

2.  **Process Obstacles:**
    *   Iterate through each obstacle `(r_o, c_o)`.
    *   For each obstacle, determine if it lies on one of the queen's 8 attack paths.
        *   **Horizontal Path:** `r_o == r_q`
        *   **Vertical Path:** `c_o == c_q`
        *   **Diagonal Path:** `abs(r_o - r_q) == abs(c_o - c_q)`
    *   If an obstacle is on an attack path, calculate the distance from the queen to it. The number of attackable squares in that direction is `distance - 1`.
    *   Update the maximum for that direction if this obstacle is closer than any other obstacle found so far (or the board edge). For example, if we find an obstacle to the right, the new number of attackable squares to the right becomes `min(current_right_squares, c_o - c_q - 1)`.

3.  **Final Calculation:**
    *   After checking all obstacles, the 8 variables will hold the final, correct number of attackable squares for each direction.
    *   Sum these 8 values to get the total.

### Python Implementation

```python
import math
import os
import random
import re
import sys

def queensAttack(n, k, r_q, c_q, obstacles):
    """
    Calculates the number of squares a queen can attack on a chessboard.

    Args:
        n (int): The size of the n x n chessboard.
        k (int): The number of obstacles.
        r_q (int): The queen's row position (1-based).
        c_q (int): The queen's column position (1-based).
        obstacles (list[list[int]]): A list of obstacle positions.

    Returns:
        int: The total number of squares the queen can attack.
    """
    
    # Calculate the max number of squares attackable in each of the 8 directions
    # without any obstacles. This is just the distance to the board edge.
    
    # Horizontal and Vertical
    up_squares = n - r_q
    down_squares = r_q - 1
    right_squares = n - c_q
    left_squares = c_q - 1
    
    # Diagonals
    up_right_squares = min(n - r_q, n - c_q)
    up_left_squares = min(n - r_q, c_q - 1)
    down_right_squares = min(r_q - 1, n - c_q)
    down_left_squares = min(r_q - 1, c_q - 1)

    # Convert obstacles list to a set of tuples for O(1) average time complexity lookups.
    # While not strictly necessary for this approach, it's good practice. The provided
    # solution iterates through the list, which is O(k).
    
    for r_o, c_o in obstacles:
        # Check if obstacle is on an attack line
        
        # 1. On the same row
        if r_o == r_q:
            if c_o > c_q: # Obstacle is to the right
                right_squares = min(right_squares, c_o - c_q - 1)
            else: # Obstacle is to the left
                left_squares = min(left_squares, c_q - c_o - 1)
        
        # 2. On the same column
        elif c_o == c_q:
            if r_o > r_q: # Obstacle is up
                up_squares = min(up_squares, r_o - r_q - 1)
            else: # Obstacle is down
                down_squares = min(down_squares, r_q - r_o - 1)
        
        # 3. On a diagonal
        elif abs(r_o - r_q) == abs(c_o - c_q):
            if r_o > r_q and c_o > c_q: # Up-Right
                up_right_squares = min(up_right_squares, r_o - r_q - 1)
            elif r_o > r_q and c_o < c_q: # Up-Left
                up_left_squares = min(up_left_squares, r_o - r_q - 1)
            elif r_o < r_q and c_o > c_q: # Down-Right
                down_right_squares = min(down_right_squares, r_q - r_o - 1)
            else: # Down-Left
                down_left_squares = min(down_left_squares, r_q - r_o - 1)
    
    # Sum up the attackable squares from all 8 directions
    total_attackable = (up_squares + down_squares + right_squares + left_squares +
                        up_right_squares + up_left_squares + down_right_squares + down_left_squares)
                        
    return total_attackable


# Boilerplate from HackerRank for running the code
if __name__ == '__main__':
    try:
        fptr = open(os.environ['OUTPUT_PATH'], 'w')
    except KeyError:
        fptr = sys.stdout

    first_multiple_input = input().rstrip().split()
    n = int(first_multiple_input[0])
    k = int(first_multiple_input[1])

    second_multiple_input = input().rstrip().split()
    r_q = int(second_multiple_input[0])
    c_q = int(second_multiple_input[1])

    obstacles = []
    for _ in range(k):
        obstacles.append(list(map(int, input().rstrip().split())))

    result = queensAttack(n, k, r_q, c_q, obstacles)

    fptr.write(str(result) + '\n')
    
    if fptr != sys.stdout:
        fptr.close()
```