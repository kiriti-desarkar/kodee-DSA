# R1 Brute: the number at (row, col) with factorials
```
n = row - 1 ; r = col - 1
return n! / ( r! * (n - r)! )
```
Dry run (5, 3): n = 4, r = 2, n - r = 2 -> 24 / (2 * 2) = 6.
Why not: the factorials overflow long before the answer does. `int` breaks at 13!, `long` at 21!, so (22, 2), whose answer is 21, prints -1 in Java. Python's integers never overflow, but the numbers get huge.
Complexity: O(row) time, O(1) extra space. The time is fine; the numbers are the problem.
