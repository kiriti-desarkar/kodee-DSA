# Bubble Sort

Video: "Bubble Sort: why and when to use it" on LearnWithKiriti (Kodee).

Sort an array from smallest to largest by swapping neighbours that are out of order.
Example: `[7, 2, 8, 1, 5]` -> `[1, 2, 5, 7, 8]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-AllPasses/` | Brute force: Make n - 1 full passes over the whole array, swapping every out-of-order pair. Simple, but it keeps checking the end even after it is sorted. | O(n²) always | O(1) |
| `Optimal-ShrinkAndStopEarly/` | Optimal: After each pass the biggest number is parked at the end, so shrink end by one; and if a pass made no swap, the array is sorted: stop. | O(n²) worst, O(n) if already sorted | O(1) |

## Rebuild it
**Neighbours swap; the biggest bubbles to the end.** After pass 1 the largest number is parked at the end, so the next pass can stop one earlier (`end--`). If a whole pass makes no swap, the array is already sorted: stop. That early exit is why bubble sort is O(n) on sorted input.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
