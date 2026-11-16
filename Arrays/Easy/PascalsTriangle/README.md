# Pascal's Triangle (interview style)

Video: "Pascal's Triangle" on LearnWithKiriti (Kodee and Mr. Tock). Arrays series, episode 13. LeetCode 118, Easy.
Taught as the **three ways interviewers ask it**: one number, one row, the whole triangle.

Every row starts and ends with 1, and every number inside is the sum of the two numbers above it.
```
row 1:        1
row 2:       1 1
row 3:      1 2 1
row 4:     1 3 3 1
row 5:    1 4 6 4 1
```
LeetCode 118: `numRows = 5` -> `[[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]`.

| Folder | Question | Approach | Time | Extra space |
|---|---|---|---|---|
| `Element-Brute/` | The number at (row, col) | n C r with factorials. Right on paper, but `long` breaks at 21!: row 22, column 2 prints -1 in Java | O(row) | O(1) |
| `Element-Optimal/` | The number at (row, col) | `ans = ans * (row - i) / i`, multiply first, then divide | O(col) | O(1) |
| `Row-Optimal/` | One whole row (LeetCode 119 style) | Walk along the row: `ans = ans * (row - col) / col` | O(row) | O(1) (the answer list is not counted) |
| `Triangle-Optimal/` | The whole triangle (LeetCode 118) | Add the two above, 1 at both ends | O(n^2) | O(1) (the answer is not counted) |
| `Triangle-RowFormula/` | The whole triangle (LeetCode 118) | Call the row formula for every row | O(n^2) | O(1) (the answer is not counted) |

Rows and columns count **from 1**, the way interviewers usually say them, so the number at (row, col) is **C(row-1, col-1)**. Example: (5, 3) = C(4, 2) = 6.

## Rebuild it
**Add the two above. Multiply, then divide. Never a factorial.**
- Every number counts the paths from the top down to it: one path to an edge, and the paths to an inside cell are the paths to its two parents added up. That count is n C r.
- Next number from the previous one: `ans = ans * (row - col) / col`. The division is always exact, because after every step `ans` is itself a binomial (a whole number of paths). Divide first and it breaks: (6, 3) gives 8 instead of 10.
- Overflow: with a 32-bit `int` and multiply-then-divide, row index 30 (the 31st row) is the first to overflow (145,422,675 x 16 = 2,326,762,800). LeetCode 118 stops at 30 rows (biggest number C(29,14) = 77,558,760), so `int` fits. For bigger rows, use `long`.
- The whole triangle is O(n^2), and nothing can beat that: the answer itself has n(n+1)/2 numbers.

Practise it next to the video: the free Kodee Practice Chrome extension (link in the video description).

Related: Pascal's Triangle II (LeetCode 119) is exactly `Row-Optimal/`.

See the `pseudocode.md` in each folder. Every program was compiled, run and tested against Python's `math.comb` for every row from 1 to 30.
