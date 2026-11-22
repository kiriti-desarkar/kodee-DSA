# Rotate Matrix / Rotate Image (online-test style)

Video: "Rotate Matrix (Rotate Image)" on LearnWithKiriti (Kodee and Mr. Tock). Arrays series, episode 14. LeetCode 48, Medium.
Taught as an **online coding test**: a 5-minute clock per round, thinking time counts, and the optimal grows out of the brute force.

Rotate an n x n matrix 90 degrees clockwise, **in place**.
```
1 2 3        7 4 1
4 5 6   ->   8 5 2
7 8 9        9 6 3
```

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-NewGrid/` | Follow one cell: `ans[col][size-1-row] = matrix[row][col]`, then copy `ans` back row by row | O(n^2) | O(n^2) |
| `Optimal-TransposeReverse/` | Swap across the diagonal (transpose), then reverse each row with two pointers | O(n^2) | O(1) |
| `FollowUp-Anticlockwise/` | Transpose, then reverse each **column** (top and bottom move inward) | O(n^2) | O(1) |
| `FollowUp-Rotate180/` | Reverse each row, then reverse the order of the rows (swap whole rows) | O(n^2) | O(1) |
| `FollowUp-Rectangle/` | New cols x rows grid: `ans[col][rows-1-row] = matrix[row][col]` (cannot be in place) | O(rows x cols) | O(rows x cols) |
| `Layers-FourWaySwap/` | Spin each ring (the same rings as Spiral Matrix) with a 4-way swap | O(n^2) | O(1) |

## Rebuild it
**Follow one cell. Swap across the diagonal. Reverse every row.**
- Cell (row, col) lands at (col, n-1-row): row 0 stands up as the last column, top to bottom.
- How to spot the trick from a blank mind: put the original and the answer side by side. The answer's row 0 is `7 4 1`, the original's col 0 read bottom-up. Every row of the answer is a column of the original, **read backwards**.
  - "Columns become rows" = swap across the diagonal (transpose).
  - "Backwards" = reverse (the same reverse as Left Rotate).
- Writing that straight into `matrix` overwrites a value you still need. A swap never loses anything.
- Split the move: (row, col) -> (col, row) is a swap across the diagonal (that is the transpose; start `col` at `row + 1`, or every pair swaps twice and undoes itself). Then (col, row) -> (col, n-1-row) keeps the row and mirrors the column: reverse each row.
- Why not `matrix = ans`? It only changes your local name; the caller's grid stays unrotated. Copy row by row (C++: pass by reference with `&`).

## Follow-ups
- Anticlockwise: transpose, then reverse each **column**.
- 180 degrees: reverse each row, then reverse the order of the rows.
- Rectangle (m x n): cannot be rotated in place. Build a new n x m grid: `ans[col][rows-1-row] = matrix[row][col]`.

Practise it on **learnwithkiriti.com** (sheet, notes, code in 4 languages, run your own code), or next to the video in the Kodee Practice Chrome extension (link in the video description).

See the `pseudocode.md` in each folder. Every program was compiled, run and tested (3x3, 4x4, 1x1, 2x2, 5x5).
