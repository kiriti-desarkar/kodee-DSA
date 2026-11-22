# Find the Missing Number

Video: "Find the Missing Number: O(n²) to one pass" on LearnWithKiriti (Kodee). LeetCode [268](https://leetcode.com/problems/missing-number/).

The array holds the numbers 1..N with exactly one missing. Return the missing one. (LeetCode 268 uses 0..n; same idea.)
Example: `[1, 2, 4, 5]` -> `3`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute/` | Brute force: For each number 1..N, search the whole array for it. | O(n²) | O(1) |
| `Better-SeenArray/` | Better: Tick each number in a seen array, then find the unticked one. | O(n) | O(n) |
| `Optimal-SumFormula/` | Optimal: Expected sum N(N+1)/2 minus the actual sum is the missing number. | O(n) | O(1) |

## Rebuild it
**You know what the total should be.** 1 + 2 + … + N = N(N + 1) / 2 (Gauss). Subtract the actual sum; what is left is the missing number. Use a 64-bit total so N(N + 1) cannot overflow.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
