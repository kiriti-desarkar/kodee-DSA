# Sort an Array

Video: "Revise All 5 Sorting Algorithms" on LearnWithKiriti (Kodee). LeetCode [912](https://leetcode.com/problems/sort-an-array/).

Return the array sorted from smallest to largest (LeetCode 912). The revision page for bubble, selection, insertion, merge and quick sort.
Example: `[5, 2, 3, 1]` -> `[1, 2, 3, 5]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-BubbleSort/` | Bubble sort: Bubble sort: swap neighbours that are out of order, shrink the end after each pass, stop early if a pass made no swap. | O(n²) | O(1) |
| `Better-InsertionSort/` | Insertion sort: Insertion sort: hold the next number, shift bigger ones right to make room, insert. | O(n²), fast when almost sorted | O(1) |
| `Optimal-MergeSort/` | Merge sort: Merge sort: split in half, sort each half, merge with two pointers. | O(n log n) | O(n) |

| Sort | Time (worst) | Best case | Extra space | Stable |
|---|---|---|---|---|
| Bubble | O(n²) | O(n) with early exit | O(1) | yes |
| Selection | O(n²) | O(n²) | O(1) | no |
| Insertion | O(n²) | O(n) | O(1) | yes |
| Merge | O(n log n) | O(n log n) | O(n) | yes |
| Quick | O(n²) | O(n log n) | O(log n) | no |

## Rebuild it
**Rebuild each sort from its name.** Bubble: neighbours swap, biggest bubbles to the end. Selection: select the smallest, swap it in. Insertion: make room, insert. Merge: split, sort halves, merge with two pointers. Quick: partition around a pivot. For a big array only merge sort (and quick sort on average) is O(n log n); the other three are O(n²).

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
