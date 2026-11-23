# Selection Sort

Video: "Selection Sort: fewest moves wins" on LearnWithKiriti (Kodee).

Sort an array from smallest to largest by repeatedly selecting the smallest remaining number and swapping it to the front.
Example: `[7, 2, 8, 1, 5]` -> `[1, 2, 5, 7, 8]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Optimal-SelectionSort/` | Selection sort: For each frontSlot, check every candidate in the rest, remember the smallest (smallestSpot), and swap it in. At most n - 1 swaps: the fewest moves of the simple sorts. | O(n²) | O(1) |

## Rebuild it from the name
**Selection: select the smallest, put it at the front.** `frontSlot` is the spot that gets the next smallest number. Check every `candidate` in the rest and remember where the smallest one sits (`smallestSpot`), then swap it into `frontSlot`. The sorted part grows by one from the left. One swap per pass at most, so it makes the fewest writes of the simple sorts, useful when writing is expensive.

See `Optimal-SelectionSort/pseudocode.md`. Every program runs Example 1 and prints the answer (the part under "Run it locally"); the solution itself is the same code as the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
