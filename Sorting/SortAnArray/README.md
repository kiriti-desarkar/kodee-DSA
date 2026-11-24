# Sort an Array

Video: "Revise All 5 Sorting Algorithms" on LearnWithKiriti (Kodee). LeetCode [912](https://leetcode.com/problems/sort-an-array/).

Return the array sorted from smallest to largest (LeetCode 912). The revision page for bubble, selection, insertion, merge and quick sort.
Example: `[5, 2, 3, 1]` -> `[1, 2, 3, 5]`

| Folder | Sort | Time | Extra space |
|---|---|---|---|
| `1-BubbleSort/` | Bubble: the biggest bubble rises to `sortedEnd` each pass; stop early if a pass made no swap. | O(n²) worst, O(n) if already sorted | O(1) |
| `2-SelectionSort/` | Selection: select the smallest of the rest and swap it into `frontSlot`. | O(n²) | O(1) |
| `3-InsertionSort/` | Insertion: make room for the `newBook` by shifting bigger books right, then drop it into the `gap`. | O(n²) worst, O(n) if almost sorted | O(1) |
| `4-MergeSort/` | Merge: split in half, sort each half, merge with two pointers (`leftSpot`, `rightSpot`). | O(n log n) | O(n) |
| `5-QuickSort/` | Quick: partition around the last number (`pivot`) with a `wall`, then sort each side. | O(n log n) on average, O(n²) worst | O(log n) |

| Sort | Time (worst) | Best case | Extra space | Stable |
|---|---|---|---|---|
| Bubble | O(n²) | O(n) with early exit | O(1) | yes |
| Selection | O(n²) | O(n²) | O(1) | no |
| Insertion | O(n²) | O(n) | O(1) | yes |
| Merge | O(n log n) | O(n log n) | O(n) | yes |
| Quick | O(n²) | O(n log n) | O(log n) | no |

## Rebuild it from the name
**Rebuild each sort from its name.** Bubble: neighbours swap, the biggest bubble rises to the end. Selection: select the smallest, put it at the front. Insertion: make room, then insert one more book. Merge: split, sort the halves, merge with two pointers. Quick: partition around a pivot, then sort each side. For a big array only merge sort (and quick sort on average) is O(n log n); the other three are O(n²).

Each folder has the same code as that sort's own page, returning `nums` as LeetCode 912 asks. Every program sorts `[5, 2, 3, 1]` (the part under "Run it locally"); the solution itself is the same code as the practice panel's Start menu on learnwithkiriti.com.
