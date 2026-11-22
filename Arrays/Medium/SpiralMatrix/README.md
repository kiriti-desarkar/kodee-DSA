# Spiral Matrix (interview style)

Video: "Print the Matrix in a Spiral Manner" on LearnWithKiriti (Kodee, Mr. Tock and SnakeBot). Arrays series, episode 12. LeetCode 54, Medium.

Given an m x n matrix, return all of its elements in spiral order: clockwise, starting at the top left.
Example: `[[1,2,3,4],[10,11,12,5],[9,8,7,6]]` -> `[1,2,3,4,5,6,7,8,9,10,11,12]`.

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute/` | SnakeBot v1, look ahead and turn: go right, and turn clockwise when the next cell is off the grid or already visited (a `visited` grid) | O(m*n) | O(m*n) |
| `Optimal/` | SnakeBot v2, four walls (peel the onion): walk the top row, right column, bottom row and left column, moving each wall inward | O(m*n) | O(1) (the answer list is not counted) |
| `FollowUp-SpiralMatrixII/` | LeetCode 59: build an n x n matrix filled 1 to n^2 in spiral order. Same four walls, but write instead of read | O(n^2) | O(1) (the answer matrix is not counted) |

## Rebuild it
**Right, down, left, up. Shrink the wall. Check before you turn back.** Keep four walls: `top`, `bottom`, `left`, `right`. Walk the top row and move `top` down. Walk the right column and move `right` in. Before walking back along the bottom row, check `top <= bottom`. Before walking up the left column, check `left <= right`.

Why the two checks? After the top row and the right column, the walls may have crossed: only one row or one column was left. Without the checks:
- `[[1,2,3,4],[10,11,12,5],[9,8,7,6]]` gives `[1,2,3,4,5,6,7,8,9,10,11,12,11]` (11 twice: the snake bites itself)
- `[[1,2,3]]` gives `[1,2,3,2,1]`
- `[[1],[2],[3]]` gives `[1,2,3,2]`
- but the 3 x 3 example is still right, which is why the bug passes the sample and fails on submit.

Play it: the SnakeBot game is in the Kodee Practice Chrome extension (link in the video description).

Related: Spiral Matrix III (LeetCode 885) and Spiral Matrix IV (LeetCode 2326) use the same walk.

See the `pseudocode.md` in each folder. Every program was compiled, run and tested (the Python versions were also random-tested against an independent oracle on 3,000 random matrices).
