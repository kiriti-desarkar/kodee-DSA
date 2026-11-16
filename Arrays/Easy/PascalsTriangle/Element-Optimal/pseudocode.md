# R1 Optimal: the number at (row, col), never a factorial
```
ans = 1
for step from 1 to col - 1:
    ans = ans * (row - step) / step          (multiply first, then divide)
return ans
```
Derivation: C(4, 2) = (4 * 3) / (2 * 1). The long factorials cancel, so walk it: x4 / 1, then x3 / 2.
Proof the division is exact: after each step, ans = C(row - 1, step), a count of paths, so a whole number. Order matters: (6, 3) is 10; multiply first gives 5 * 4 / 2 = 10, divide first gives 5 / 2 = 2, then 2 * 4 = 8.
Dry run (5, 3): step = 1: 1 * 4 / 1 = 4; step = 2: 4 * 3 / 2 = 6; stop -> 6. Column 1: the loop never runs, ans = 1.
Symmetry: C(n, r) = C(n, n - r), so you can loop min(col - 1, row - col) steps. (30, 29) = C(29, 1) = 29 in one step.
Complexity: O(col) time, O(1) extra space.
