# Follow-up: rotate 90 degrees anticlockwise, in place
```
for row = 0 to size-1:
    for col = row+1 to size-1:
        swap matrix[row][col], matrix[col][row]
for each col:
    top = 0;  bottom = size-1
    while top < bottom: swap matrix[top][col], matrix[bottom][col]; top++, bottom--
```
Side by side: the anticlockwise answer's row 0 is `3 6 9`, the start's last column read top-down. Columns become rows (transpose), then the rows come out in reverse order: reverse each column.
Proof on 3x3: after the transpose: 1 4 7 / 2 5 8 / 3 6 9. Reverse each column: 3 6 9 / 2 5 8 / 1 4 7. Correct.
Complexity: O(n^2) time, O(1) extra space.
