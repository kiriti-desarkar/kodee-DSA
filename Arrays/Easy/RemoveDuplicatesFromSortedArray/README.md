# Remove Duplicates from Sorted Array

Video: "Remove Duplicates from Sorted Array: brute force to two pointers" on LearnWithKiriti (Kodee). LeetCode [26](https://leetcode.com/problems/remove-duplicates-from-sorted-array/).

Keep one copy of each value at the front of a sorted array, in place, and return how many there are (k).
Example: `[1, 1, 2]` -> k = `2`, front `[1, 2]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-Set/` | Brute force: Copy the values into a sorted set, then write them back to the front. | O(n log n) | O(n) |
| `Optimal-TwoPointers/` | Optimal: Two pointers: copy a value forward only when it differs from the last kept one. | O(n) | O(1) |

## Rebuild it
**Sorted means duplicates sit side by side.** `write` is the next free spot; `read` scans. Copy `nums[read]` to `write` only when it differs from the last kept value `nums[write - 1]`.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
