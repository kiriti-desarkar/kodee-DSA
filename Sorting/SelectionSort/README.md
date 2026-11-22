# Selection Sort

Video: "Selection Sort: fewest moves wins" on LearnWithKiriti (Kodee).

Sort an array from smallest to largest by repeatedly selecting the smallest remaining number and swapping it to the front.
Example: `[7, 2, 8, 1, 5]` -> `[1, 2, 5, 7, 8]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Optimal-SelectionSort/` | Selection sort: For each position sortedEnd, scan the rest for the smallest number (minSpot) and swap it in. At most n - 1 swaps: the fewest moves of the simple sorts. | O(n²) | O(1) |

## Rebuild it
**Find the smallest, swap it in, grow the sorted part.** `sortedEnd` marks the first unsorted spot; `scan` looks for the smallest number (`minSpot`) in the rest. One swap per pass at most, so it makes the fewest writes of the simple sorts, useful when writing is expensive.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
