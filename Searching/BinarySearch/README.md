# Binary Search

Video: "Binary Search: cut the shelf in half" on LearnWithKiriti (Kodee). LeetCode [704](https://leetcode.com/problems/binary-search/).

Find the index of `target` in a sorted array of distinct numbers, or return -1.
Example: `[2, 5, 8, 12, 16, 23, 38, 56]`, target `23` -> `5`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-LinearSearch/` | Linear search: Linear search: check every number from the left. It ignores the one thing we were given: the array is sorted. | O(n) | O(1) |
| `Optimal-BinarySearch/` | Binary search: Look at the middle (mid). If target is bigger, it can only be right of mid (low = mid + 1); if smaller, left of it (high = mid - 1). Half the shelf is gone every step. | O(log n) | O(1) |

## Rebuild it
**Sorted means one look rules out half.** Compare the target with the middle (`mid`). Bigger: it can only be right of `mid`, so `low = mid + 1`. Smaller: `high = mid - 1`. Stop when `low > high`. Write `mid = low + (high - low) / 2` so `low + high` never overflows.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
