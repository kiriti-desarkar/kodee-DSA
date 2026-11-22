# Optimal: mark inside the grid

Use row 0 and column 0 of the grid itself as the marker strips; two flags (rowZero, colZero) remember whether they had a 0 of their own.

```
rowZero = row 0 has a 0
colZero = column 0 has a 0
for row from 1, col from 1:
    if matrix[row][col] == 0: matrix[row][0] = 0; matrix[0][col] = 0
for row from 1, col from 1:
    if matrix[row][0] == 0 or matrix[0][col] == 0: matrix[row][col] = 0
if rowZero: zero row 0
if colZero: zero column 0
```

O(m·n) time, O(1) extra space: row 0 and column 0 are the marker strips, the two flags remember their own zeros.
