# R3 Follow-up: Spiral Matrix II (LeetCode 59, Medium): build n x n filled 1 to n^2
```
matrix = size x size of zeros; top = 0; bottom = size-1; left = 0; right = size-1; value = 1
while top <= bottom and left <= right:
    top row left->right, right col top->bottom, (if top <= bottom) bottom row right->left,
    (if left <= right) left col bottom->top:  each cell: matrix[..][..] = value; value += 1; then move that wall in
return matrix
```
Derivation: same walk, flip read to write. For a square the guards never change the answer (the loops they skip would be empty; verified n = 1 to 11); keep them so it is safe for any m x n.
Complexity: O(n^2) time, O(1) extra besides the output.
Dry run n=3: top 1,2,3; right 4,5; bottom 6,7; left 8; inner 9 -> [[1,2,3],[8,9,4],[7,6,5]].
Cards: LeetCode 885 (walk outward from a start cell), LeetCode 2326 (fill from a linked list), links in the description.
