# Layer by layer: a 4-way swap per ring (GitHub only)
```
for layer = 0 to size/2 - 1:
    first = layer;  last = size-1-layer
    for step = 0 to last-first-1:
        top = matrix[first][first+step]
        top    <- left    matrix[first][first+step]  = matrix[last-step][first]
        left   <- bottom  matrix[last-step][first]   = matrix[last][last-step]
        bottom <- right   matrix[last][last-step]    = matrix[first+step][last]
        right  <- top     matrix[first+step][last]   = top
```
The rings are the same rings you peeled in the Spiral Matrix episode. Each step moves 4 cells one quarter turn using one temp.
Same rule: (row, col) -> (col, n-1-row); e.g. the left cell (last-step, first) lands on the top cell (first, first+step).
Complexity: O(n^2) time, O(1) extra space. Same speed as transpose + reverse, more index math.
