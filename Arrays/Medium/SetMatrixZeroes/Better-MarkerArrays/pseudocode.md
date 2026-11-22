# Better: rowMark and colMark

Pass 1: mark the row and the column of every 0 in rowMark / colMark. Pass 2: a cell becomes 0 if its row or its column is marked.

```
rowMark = m falses, colMark = n falses
for row, col: if matrix[row][col] == 0: rowMark[row] = true; colMark[col] = true
for row, col: if rowMark[row] or colMark[col]: matrix[row][col] = 0
```

O(m·n) time, O(m + n) extra space.
