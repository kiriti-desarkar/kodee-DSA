# Insertion Sort

Video: "Insertion Sort: make room for one more book" on LearnWithKiriti (Kodee).

Sort an array by growing a sorted left part: insert each next number into its place among the numbers before it.
Example: `[7, 2, 8, 1, 5]` -> `[1, 2, 5, 7, 8]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Optimal-MakeRoomThenInsert/` | Make room, then insert: take the newBook, shift every bigger book one step right to make room, then drop newBook into the gap. One write per step. | O(n²) worst, O(n) if almost sorted | O(1) |

## Rebuild it from the name
**Insertion: make room, then insert one more book.** The books left of `newBookSpot` are already sorted on the shelf. Pick up the `newBook`, slide every bigger book one step right, and the empty `gap` moves left until the book on its left is not bigger. Drop `newBook` into the `gap`. Almost-sorted shelves need hardly any shifting, which is why insertion sort is O(n) there.

See `Optimal-MakeRoomThenInsert/pseudocode.md`. Every program runs Example 1 and prints the answer (the part under "Run it locally"); the solution itself is the same code as the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
