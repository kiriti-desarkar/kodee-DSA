# Move Zeroes to the End

Video: "Move Zeros to End: brute force to two pointers" on LearnWithKiriti (Kodee). LeetCode [283](https://leetcode.com/problems/move-zeroes/).

Move every 0 to the end of the array, in place, keeping the order of the non-zero numbers.
Example: `[0, 1, 0, 3, 12]` -> `[1, 3, 12, 0, 0]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-TempArray/` | Brute force: Copy the non-zeros to a temp array, then write them back and fill zeros. | O(n) | O(n) |
| `Optimal-TwoPointers/` | Optimal: Two pointers in place: swap each non-zero forward to the next free spot. | O(n) | O(1) |

## Rebuild it
**`write` is where the next non-zero belongs; `read` looks at every number.** When `read` finds a non-zero, swap it to `write` and move `write` on. Zeros drift to the end by themselves, and non-zeros keep their order.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
