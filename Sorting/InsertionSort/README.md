# Insertion Sort

Video: "Insertion Sort: make room for one more book" on LearnWithKiriti (Kodee).

Sort an array by growing a sorted left part: insert each next number into its place among the numbers before it.
Example: `[7, 2, 8, 1, 5]` -> `[1, 2, 5, 7, 8]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-SwapIntoPlace/` | Swap it into place: Take the next number and swap it left, one neighbour at a time, until the number on its left is not bigger. Three writes per step. | O(n²) | O(1) |
| `Optimal-MakeRoomThenInsert/` | Make room, then insert: Hold the next number, shift every bigger number one step right to make room, then drop the held number into the gap (slot). One write per step. | O(n²) worst, O(n) if almost sorted | O(1) |

## Rebuild it
**Hold the next book, shift bigger books right, drop it in the gap.** The left part is always sorted. Swapping the new number left one step at a time works, but shifting is cheaper: hold it (`held`), move each bigger neighbour one step right, and write `held` once into `slot`.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
