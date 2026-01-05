# Chief Hopper's Problem Discussion

Good morning everyone.

This session discusses the **Chief Hopper** problem, a hard problem from HackerRank (last year's question). We will solve this and one problem from LeetCode. Please pay attention and keep mobile phones away. This is a critical time for your preparation, so work smartly.

---

## Problem Statement

In the Chief Hopper problem, a person hops between buildings. We are given an array representing the heights of these buildings.  
**Example:** `[2, 3, 4, 3, 2]`  
The height of the first building is 2, the second is 3, and so on.

To jump on a building, the hopper requires energy. The energy level changes based on the height of the building and the current "board energy" (energy available before the jump).

**Energy update equations:**

- If Board Energy < Height:  
    `New Energy = Board Energy - (Height - Board Energy)`
- If Board Energy >= Height:  
    `New Energy = Board Energy + (Board Energy - Height)`

Both cases simplify to:  
`New Energy = 2 * Board Energy - Height`

---

## Problem Goal

Find the **minimum initial energy** the hopper needs to start with to successfully jump all buildings, ensuring their board energy never drops to zero or negative before a jump. The energy after the last jump doesn't matter.

---

## Example Walkthrough (Forward Approach)

Given building heights: `[2, 3, 4, 3, 2]`

### Starting Energy: 4

| Building | Height | Board Energy | New Energy |
|----------|--------|--------------|------------|
| 1        | 2      | 4            | 6          |
| 2        | 3      | 6            | 9          |
| 3        | 4      | 9            | 14         |
| 4        | 3      | 14           | 25         |
| 5        | 2      | 25           | 48         |

Final energy: **48** (success)

### Starting Energy: 3

| Building | Height | Board Energy | New Energy |
|----------|--------|--------------|------------|
| 1        | 2      | 3            | 4          |
| 2        | 3      | 4            | 5          |
| 3        | 4      | 5            | 6          |
| 4        | 3      | 6            | 9          |
| 5        | 2      | 9            | 16         |

Final energy: **16** (success)

### Starting Energy: 2

| Building | Height | Board Energy | New Energy |
|----------|--------|--------------|------------|
| 1        | 2      | 2            | 2          |
| 2        | 3      | 2            | 1          |
| 3        | 4      | 1            | -2         |

Final energy: **-2** (failure)

**Conclusion:** Minimum working initial energy is **3**.

---

## Analogy: Bike Petrol

Think of this like going home from college on a bike with limited petrol. You want just enough petrol to reach home. Too much is wasteful; too little and you won't make it.

---

## Approaches to Solve

### 1. Naive Approach (Brute Force)

- Start with a potential initial energy (e.g., height of the first building).
- Simulate the jumps.
- If energy drops to zero or negative, increase initial energy and try again.
- The first successful value is the minimum.

**Drawback:** Inefficient for large values.

---

### 2. Greedy Approach (Solving in Reverse)

- Work backward from the last building.
- After the last jump, energy can be zero.
- Use the formula:  
    `Board Energy = ceil((New Energy + Height) / 2)`
- At each step, calculate the minimum required energy before the jump.

#### Example Calculation

Given heights: `[2, 3, 4, 3, 2]`

| Building | Height | Required Energy After Jump | Required Board Energy Before Jump |
|----------|--------|---------------------------|-----------------------------------|
| 5        | 2      | 0                         | ceil((0 + 2) / 2) = 1             |
| 4        | 3      | 1                         | ceil((1 + 3) / 2) = 2             |
| 3        | 4      | 2                         | ceil((2 + 4) / 2) = 3             |
| 2        | 3      | 3                         | ceil((3 + 3) / 2) = 3             |
| 1        | 2      | 3                         | ceil((3 + 2) / 2) = 3             |

**Minimum initial energy required:** **3**

---

## Summary

- Both forward simulation and reverse greedy approach yield the same answer.
- The reverse approach is more efficient and direct.

---

**Understood? Okay.**