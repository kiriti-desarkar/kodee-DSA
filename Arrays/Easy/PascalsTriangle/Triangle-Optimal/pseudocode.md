# R3 Optimal: the whole triangle (LeetCode 118), add the two above
```
triangle = []
for row from 0 to numRows - 1:                 (0-indexed loop counters)
    rowList = []
    for col from 0 to row:
        if col == 0 or col == row: rowList.add(1)
        else: prev = triangle[row - 1]; rowList.add(prev[col - 1] + prev[col])
    triangle.add(rowList)
return triangle
```
Why the 1s at both ends: an edge cell has only one parent. Pretend there is an invisible zero outside the triangle: 1 + 0 = 1.
Dry run numRows 5: [1]; [1, 1]; [1, 2, 1]; [1, 3, 3, 1]; [1, 4, 6, 4, 1]. numRows 1 -> [[1]] (prev is never touched).
Only additions, so no middle step is ever bigger than the answer (an `int` is safe up to row index 33).
Complexity: the answer holds n(n+1)/2 numbers (30 rows: 465), so O(n^2) time is the best possible; O(1) extra space besides the output.
