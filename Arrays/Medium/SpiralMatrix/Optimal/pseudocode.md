# R2 Optimal: four walls (peel the onion)
```
result = []; top = 0; bottom = rows-1; left = 0; right = cols-1
while top <= bottom and left <= right:
    for col from left to right:      result.add(matrix[top][col]);     top += 1
    for row from top to bottom:      result.add(matrix[row][right]);   right -= 1
    if top <= bottom:
        for col from right down to left:  result.add(matrix[bottom][col]);  bottom -= 1
    if left <= right:
        for row from bottom down to top:  result.add(matrix[row][left]);    left += 1
return result
```
Derivation: in R1 the visited cells always form a frame around the unvisited block, so remember only the frame's four edges (four numbers) instead of the whole grid.
Proof of the two guards: the while condition guarantees a row and a column exist, so the top row and right column are safe. After they are walked and their walls move in, the block may have collapsed to a single row (top > bottom) or a single column (left > right); then the bottom row or left column would re-read cells already printed. Without the guards: 3x3 stays correct (hides the bug); 3x4 -> [1,2,3,4,8,12,11,10,9,5,6,7,6]; [[1,2,3]] -> [1,2,3,2,1]; [[1],[2],[3]] -> [1,2,3,2].
Honest alternative: stop when result has m*n numbers; also works.
Other styles (one sentence): recursion on the inner layer (stack space), overwrite visited cells (destroys input).
Complexity: O(m*n) time, O(1) extra besides the output.
Dry run (clock paused): [[1],[2],[3]] -> top row 1; right col 2,3 (right=-1); bottom loop empty; left guard false -> [1,2,3]. [[1,2,3]] -> top row 1,2,3; right col none; bottom guard false; left loop empty -> [1,2,3].
Code dry run on 3x4: pass 1 top 1,2,3,4; right 8,12; bottom 11,10,9; left 5; pass 2 top 6,7; right none; bottom guard false (top 2 > bottom 1); left none; ends -> matches.
