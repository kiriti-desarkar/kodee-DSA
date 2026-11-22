# Brute: copy the grid

Copy the grid. Every 0 in the COPY wipes its row and its column in the real matrix, so new zeros never spread.

```
copy = a copy of matrix
for row, col over the grid:
    if copy[row][col] == 0:
        set every matrix[row][across] = 0
        set every matrix[down][col] = 0
```

O(m·n·(m + n)) time, O(m·n) extra space for the copy.
