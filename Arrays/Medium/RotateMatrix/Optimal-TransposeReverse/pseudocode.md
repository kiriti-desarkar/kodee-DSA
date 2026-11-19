# R2 Optimal: in place (swap across the diagonal, then reverse each row)
```
for row = 0 to size-1:
    for col = row+1 to size-1:
        swap matrix[row][col], matrix[col][row]
for each row:
    left = 0;  right = size-1
    while left < right: swap, left++, right--
```
Derivation: writing (row, col) -> (col, size-1-row) straight into matrix overwrites a value we still need (1 lands on the 3). Swaps never lose a value, so split the move:
- Move A: (row, col) -> (col, row). Row and column trade places: a swap across the diagonal. col starts at row + 1 (from 0, every pair swaps twice and undoes itself; the diagonal has no partner). This is the transpose.
- Move B: (col, row) -> (col, size-1-row). The row stays, the column mirrors: reverse each row with two pointers (the middle of an odd row stays).
Proof on 3x3: after Move A: 1 4 7 / 2 5 8 / 3 6 9. Reverse each row: 7 4 1 / 8 5 2 / 9 6 3. Correct.
Complexity: O(n^2) time (linear in the number of cells), O(1) extra space.
