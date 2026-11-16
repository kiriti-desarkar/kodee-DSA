# R2 Optimal: one whole row (LeetCode 119 style)
```
list = [1] ; ans = 1
for col from 1 to row - 1:
    ans = ans * (row - col) / col
    list.add(ans)
return list
```
Derivation: the next number is this number x (row - col) / col. Same exactness proof as R1.
Dry run row 5: 1 * 4 / 1 = 4 -> [1, 4]; 4 * 3 / 2 = 6 -> [1, 4, 6]; 6 * 2 / 3 = 4; 4 * 1 / 4 = 1 -> [1, 4, 6, 4, 1]. Row 1: the loop never runs -> [1].
Brute force (not coded): call R1 for every column, O(row^2), because every call repeats the earlier steps.
Overflow: with a 32-bit int, row index 29 still fits (77,558,760 x 15 = 1,163,381,400), but row index 30 breaks (145,422,675 x 16 = 2,326,762,800 > 2,147,483,647), even though its biggest answer, 155,117,520, fits. That is why `ans` is a `long`.
Why O(row) and not O(1): the row itself has row numbers.
Complexity: O(row) time, O(1) extra space besides the output.
