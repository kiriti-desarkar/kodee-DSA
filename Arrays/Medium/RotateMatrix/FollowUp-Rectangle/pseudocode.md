# Follow-up: rotate a rows x cols rectangle 90 degrees clockwise
```
ans = new cols x rows grid
for each row, col:
    ans[col][rows-1-row] = matrix[row][col]
return ans
```
A rectangle's shape changes (2 x 3 becomes 3 x 2), so it cannot be rotated in place: build a new grid. Same one-cell rule as the square, with rows in place of size.
Proof on 2x3: [[1,2,3],[4,5,6]] becomes [[4,1],[5,2],[6,3]]. Correct.
Complexity: O(rows x cols) time and extra space.
