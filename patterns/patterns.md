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

**Slow/Fast variant:**
Slow tracks the next valid position. Fast scans ahead looking for
valid elements. Use when rearranging in-place while keeping order.
- Move Zeroes #283

**Left/Right variant:**
Start one pointer at each end and move them toward each other.
Use on sorted arrays when looking for a pair or comparing ends.
- Squares of a Sorted Array #977

## HashMap Patterns

### Frequency Counter
Use an unordered_map<int, int> to count how many times 
each element appears. Loop through array, increment 
map[element] for each element seen.

Time:  O(n) — one pass
Space: O(n) — up to n unique keys

Use when: counting occurrences, finding duplicates, 
checking anagrams, grouping elements

Problems:
- frequency_counter.cpp (custom implementation)
- Valid Anagram #242
- Contains Duplicate #217