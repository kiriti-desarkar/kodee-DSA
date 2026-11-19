# R1 Brute: a new grid
```
ans = new size x size grid
for each row, col:
    ans[col][size-1-row] = matrix[row][col]
copy every row of ans back into matrix
```
Derivation: watch row 0 (1 2 3). After the rotation it stands in the LAST column, top to bottom; row 1 stands in the middle column. So row goes to column size-1-row, and the cell in column col goes to row col: (row, col) -> (col, size-1-row).
Check: 1 at (0, 0) lands at (0, 2), top right.
Why not `matrix = ans`: that only re-points the local name; the caller still holds the old grid. Copy row by row.
Complexity: O(n^2) time, O(n^2) extra space (the second grid). Passes every test, but breaks "in place".
