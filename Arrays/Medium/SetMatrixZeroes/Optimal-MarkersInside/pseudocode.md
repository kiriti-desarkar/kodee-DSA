# R3 Optimal: markers inside row 0 and column 0
```
rowZero = row 0 has a zero?      colZero = column 0 has a zero?
for row = 1 to rows-1, col = 1 to cols-1:
    if matrix[row][col] == 0: matrix[row][0] = 0;  matrix[0][col] = 0
for row = 1 to rows-1, col = 1 to cols-1:
    if matrix[row][0] == 0 or matrix[0][col] == 0: matrix[row][col] = 0
if rowZero: zero all of row 0
if colZero: zero all of column 0
```
Derivation: draw Round 2's picture. rowMark stands left of the grid like an extra column, colMark sits on top like an extra row. The grid already has a column with one cell per row (column 0) and a row with one cell per column (row 0). Slide the markers inside.
Why the markers do not break the grid:
- Inner cells (row >= 1, col >= 1) are never written by a marker.
- A marker only writes a zero where the answer already has one: the zero at (3, 2) writes matrix[0][2], and column 2 is all zero in the answer anyway. Same for column 0: the zero at (1, 1) writes matrix[1][0], and row 1 is zero in the answer.
- Two things can go wrong. 1) Row 0 or column 0 may hold a real zero of its own: save that first in rowZero and colZero. 2) The corner matrix[0][0] sits in both marker lines, so it cannot answer for both; that is why there are two booleans, one for row 0 and one for column 0.
- Order: mark from the inner cells only, fill the inner cells from the markers, and fill the borders LAST. Zero row 0 first and every column marker turns zero: the whole grid wipes out, like the trap.
Check on [[1,2,3,4],[5,0,7,8],[9,10,11,12],[13,14,0,16]]: rowZero = colZero = false. (1, 1) marks matrix[1][0] and matrix[0][1]; (3, 2) marks matrix[3][0] and matrix[0][2]. Fill: rows 1 and 3, columns 1 and 2 become zero. Borders stay. Result [[1,0,0,4],[0,0,0,0],[9,0,0,12],[0,0,0,0]].
Complexity: O(m·n) time, O(1) extra space. No imports needed.
