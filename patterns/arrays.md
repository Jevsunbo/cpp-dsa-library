# Array Patterns

## Big O Reference

| Operation          | Time  | Why                                      |
|--------------------|-------|------------------------------------------|
| Access by index    | O(1)  | Direct memory address calculation        |
| Insert at end      | O(1)  | No shifting needed                       |
| Insert at beginning| O(n)  | Every element shifts right               |
| Delete from middle | O(n)  | Elements shift left to fill gap          |
| Search (unsorted)  | O(n)  | May visit every element                  |

## Patterns

### Prefix Sum
Build an array where each index stores the sum of all elements up to that index.
Lets you answer range sum queries in O(1) instead of O(n).
- Running Sum of 1d Array #1480
- Find Pivot Index #724

### Kadane's Algorithm
At each element: extend the subarray or restart fresh — whichever is larger.
Used for maximum subarray problems.
- Maximum Subarray #53

### Two Pointers
Use two indices moving toward each other or at different speeds.
- Move Zeroes #283
- Squares of a Sorted Array #977
