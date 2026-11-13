# R1 Brute: walk and turn (direction + visited grid)
```
rows = matrix.length; cols = matrix[0].length
result = []; visited = grid of false
row = 0; col = 0; direction = 0        (0 right, 1 down, 2 left, 3 up)
repeat rows*cols times:
    result.add(matrix[row][col]); visited[row][col] = true
    nextRow = row + rowStep[direction]; nextCol = col + colStep[direction]
    if outside the grid or visited[nextRow][nextCol]:
        direction = (direction + 1) % 4
        nextRow = row + rowStep[direction]; nextCol = col + colStep[direction]
    row = nextRow; col = nextCol
return result
```
rowStep = [0, 1, 0, -1], colStep = [1, 0, -1, 0].
Derivation (blank mind): be a robot with a finger on the grid; go right until you can't, then turn clockwise. "Can't" = off the grid or already visited, so keep a visited grid.
Proof: each step prints one new cell, never a visited one; after a turn a free neighbour exists until all cells are printed, so exactly m*n steps print each cell once. The outside test comes first so visited is never read out of range.
Complexity: O(m*n) time, O(m*n) extra (visited) plus the output.
Dry run (clock paused) on [[1,2,3],[4,5,6]]: 1, 2, 3, off grid -> down, 6, off grid -> left, 5, 4 -> [1,2,3,6,5,4].
Code dry run on 3x4: 1,2,3,4 turn down; 8,12 turn left; 11,10,9 turn up; 5 (next is the visited 1) turn right; 6,7 -> 12 steps, matches.
