# R2 Better: one boolean per row and per column
```
rowMark = rows x false;  colMark = cols x false
pass 1: for each row, col:
    if matrix[row][col] == 0: rowMark[row] = true;  colMark[col] = true
pass 2: for each row, col:
    if rowMark[row] or colMark[col]: matrix[row][col] = 0
```
Derivation: the copy only answered two questions. Does this row have a zero? Does this column have a zero? A whole grid for two yes/no questions is too much: one boolean per row and one per column is enough. Pass 1 only reads, so new zeros cannot spread.
Check on [[0,1,2,0],[3,4,5,2],[1,3,1,5]]: rowMark = [T, F, F], colMark = [T, F, F, T]. (1, 1) holds 4, neither marked, so it stays. (1, 3) is in a marked column, so it becomes 0. Result [[0,0,0,0],[0,4,5,0],[0,3,1,0]].
Complexity: O(m·n) time, O(m + n) extra space.
