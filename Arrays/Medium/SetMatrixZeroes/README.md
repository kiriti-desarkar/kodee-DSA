# Set Matrix Zeroes

Video: "Set Matrix Zeroes (episode 15)" on LearnWithKiriti (Kodee). LeetCode [73](https://leetcode.com/problems/set-matrix-zeroes/).

Wherever the grid has a 0, set its whole row and its whole column to 0, in place. Only the zeros that were there at the start count.
Example: `[[1, 1, 1], [1, 0, 1], [1, 1, 1]]` -> `[[1, 0, 1], [0, 0, 0], [1, 0, 1]]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-CopyTheGrid/` | Brute force: Copy the grid. Every 0 in the COPY wipes its row and its column in the real matrix, so new zeros never spread. | O(m·n·(m + n)) | O(m·n) extra (a copy of the grid) |
| `Better-MarkerArrays/` | Better: Pass 1: mark the row and the column of every 0 in rowMark / colMark. Pass 2: a cell becomes 0 if its row or its column is marked. | O(m·n) | O(m + n) extra (rowMark + colMark) |
| `Optimal-MarkInsideTheGrid/` | Optimal: Use row 0 and column 0 of the grid itself as the marker strips; two flags (rowZero, colZero) remember whether they had a 0 of their own. | O(m·n) | O(1) |

## Rebuild it
**Never zero as you go.** New zeros would spread and wipe the grid. First remember which rows and columns have a zero (a copy, then rowMark/colMark, then row 0 and column 0 of the grid itself), then fill.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
