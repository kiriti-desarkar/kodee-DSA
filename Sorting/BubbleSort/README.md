# Bubble Sort

Video: "Bubble Sort: why and when to use it" on LearnWithKiriti (Kodee).

Sort an array from smallest to largest by swapping neighbours that are out of order.
Example: `[7, 2, 8, 1, 5]` -> `[1, 2, 5, 7, 8]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Optimal-ShrinkAndStopEarly/` | After each pass the biggest bubble rises to `sortedEnd`, so the next pass stops one earlier; and if a pass made no swap, the array is sorted: stop. | O(n²) worst, O(n) if already sorted | O(1) |

## Rebuild it from the name
**Bubble: the biggest bubble rises to the top.** Walk the array comparing `currBubble` with `nextBubble`; if the left one is bigger, swap them. The biggest number keeps getting carried along, so after one pass it has risen to the end, `sortedEnd`. Each pass parks one more number, so the next pass stops one earlier (`sortedEnd--`). If a whole pass makes no swap, nothing is out of order: stop. That early exit is why bubble sort is O(n) on sorted input.

See `Optimal-ShrinkAndStopEarly/pseudocode.md`. Every program runs Example 1 and prints the answer (the part under "Run it locally"); the solution itself is the same code as the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
