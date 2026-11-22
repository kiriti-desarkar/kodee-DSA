# Left Rotate Array by One

Video: "Left Rotate Array by One: where did the 1 go?" on LearnWithKiriti (Kodee).

Move every number one step left, in place; the first number goes to the end.
Example: `[1, 2, 3, 4, 5]` -> `[2, 3, 4, 5, 1]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-TempArray/` | Brute force: Copy everyone one step left into a new array, put the first number at the end, copy back. | O(n) | O(n) extra (a second array) |
| `Optimal/` | Optimal: Remember the first number, shift everyone one step left in place, then put the first number in the last spot. | O(n) | O(1) |

## Rebuild it
**Save the first, shift everyone left, put the first at the end.** Shifting overwrites `nums[0]` first, so remember it (`first`) before the loop.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
