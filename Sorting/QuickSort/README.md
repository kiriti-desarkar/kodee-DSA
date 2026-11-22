# Quick Sort

Video: "Quick Sort: lucky pivot or O(n²)?" on LearnWithKiriti (Kodee).

Sort an array in place by partitioning around a pivot and sorting each side.
Example: `[7, 2, 8, 1, 5]` -> `[1, 2, 5, 7, 8]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Optimal-QuickSort/` | Quick sort: Partition around the last number (pivot): scan moves left to right, and everything ≤ pivot is swapped behind the wall. The pivot lands at the wall, then sort each side. | O(n log n) on average, O(n²) worst | O(log n) extra (recursion) |

## Rebuild it
**Pick a pivot, put it where it belongs, repeat on each side.** With the last number as pivot, `scan` walks from `low`; every number <= pivot is swapped behind the `wall`. Finally the pivot swaps onto the wall: everything left is smaller, everything right is bigger. A lucky pivot halves the work (O(n log n)); an unlucky one on sorted input peels off one number per level (O(n²)).

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
