# Max Consecutive Ones

Video: "Max Consecutive Ones: why your code returns 2, not 3" on LearnWithKiriti (Kodee). LeetCode [485](https://leetcode.com/problems/max-consecutive-ones/).

Return the length of the longest run of 1s in an array of 0s and 1s.
Example: `[1, 1, 0, 1, 1, 1]` -> `3`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute/` | Brute force: From every start, count the 1s that follow, and keep the biggest count. The same 1s get counted again and again. | O(n²) worst (all 1s) | O(1) |
| `Optimal/` | Optimal: One pass: current counts the run you are in, a 0 resets it, and maxCount is updated inside the 1 branch, so a run that ends the array is not lost. | O(n) | O(1) |

## Rebuild it
**Count the run you are in; a 0 resets it.** The classic bug updates `maxCount` only when a 0 arrives, so a run that ends the array (the 3 here) is never saved: it returns 2. Update `maxCount` inside the 1 branch instead.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
