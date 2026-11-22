# Set Matrix Zeroes (online-test style)

Video: "Set Matrix Zeroes" on LearnWithKiriti (Kodee and Mr. Tock). Arrays series, episode 15. LeetCode 73, Medium.
Taught as an **online coding test**: a clock per round (5:00, 5:00, then 8:00), thinking time counts, and the optimal grows out of the better solution.

If a cell is zero, set its whole row and column to zero, **in place**.
```
 1  2  3  4        1  0  0  4
 5  0  7  8   ->   0  0  0  0
 9 10 11 12        9  0  0 12
13 14  0 16        0  0  0  0
```

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-CopyGrid/` | Read zeros from a copy, write zeros into `matrix` (across the row, down the column) | O(m·n·(m+n)) | O(m·n) |
| `Better-MarkerArrays/` | `rowMark` (one boolean per row) + `colMark` (one per column), then fill | O(m·n) | O(m + n) |
| `Optimal-MarkersInside/` | Markers live in column 0 and row 0; `rowZero` / `colZero` saved first; borders filled last | O(m·n) | O(1) |

## Rebuild it
**Mark the borders. Fill the inside. Borders last.**
- Zero as you go fails: new zeros look like old ones and spread. Never mark with -1: any int is a legal value.
- The copy only answers "does this row have a zero?" and "does this column have a zero?": one boolean each is enough.
- Column 0 has one cell per row, row 0 has one cell per column: slide `rowMark` and `colMark` inside.
- A marker only writes a zero where the answer already has one. Inner cells are never touched.
- Save `rowZero` and `colZero` first (real border zeros, and the corner `matrix[0][0]` sits in both lines).
- Inner cells first, borders LAST. Filling row 0 first turns every column marker into zero and wipes the grid.

Practise it on **learnwithkiriti.com** (sheet, notes, code in 4 languages, Shelf Bot animates your own code), or next to the video in the free Kodee Practice Chrome extension (link in the video description).

See the `pseudocode.md` in each folder. Every program was compiled, run and tested (3x3, 3x4, 4x4, 1x1, 2x2, negatives, border zeros).
