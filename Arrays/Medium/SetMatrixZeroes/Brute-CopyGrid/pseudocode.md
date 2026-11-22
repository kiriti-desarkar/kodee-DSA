# R1 Brute: read zeros from a copy
```
copy = a copy of matrix
for each row, col:
    if copy[row][col] == 0:
        for across = 0 to cols-1: matrix[row][across] = 0
        for down = 0 to rows-1:   matrix[down][col] = 0
```
Derivation: zero as you go fails. The new zeros look exactly like the original ones, so the scan keeps wiping more rows and columns until almost the whole grid is zero. We must remember which zeros were there at the start: a photo of the start, a copy. Read zeros from the copy, write zeros into matrix; the copy never changes, so new zeros cannot spread.
Why not mark cells with -1: -1 is a legal value (the grid can hold any int, from -2^31 up). No value is free to be a marker.
Check on [[1,1,1],[1,0,1],[1,1,1]]: the copy has a zero at (1, 1). Across zeros row 1, down zeros column 1: [[1,0,1],[0,0,0],[1,0,1]].
Complexity: O(m·n·(m+n)) time in the worst case, O(m·n) extra space (the copy).
