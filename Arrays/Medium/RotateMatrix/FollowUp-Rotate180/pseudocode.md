# Follow-up: rotate 180 degrees, in place
```
for each row:
    left = 0;  right = size-1
    while left < right: swap, left++, right--
top = 0;  bottom = size-1
while top < bottom: swap whole rows matrix[top], matrix[bottom]; top++, bottom--
```
Cell (row, col) lands at (size-1-row, size-1-col): both indices mirror, so reverse each row (col mirrors), then reverse the order of the rows (row mirrors). No transpose needed.
Proof on 3x3: reverse each row: 3 2 1 / 6 5 4 / 9 8 7. Reverse the row order: 9 8 7 / 6 5 4 / 3 2 1. Correct.
Complexity: O(n^2) time, O(1) extra space (swapping whole rows swaps references in Java, Python and JS; in C++ swapping two vectors is O(1)).
