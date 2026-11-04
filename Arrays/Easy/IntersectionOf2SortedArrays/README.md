# Intersection of Two Sorted Arrays (LeetCode 350)

Short revision notes for the LearnWithKiriti episode, starring Kodee.

## Problem
Two arrays, `shelfA` and `shelfB`. Return every value that appears in both. Each value appears as many times as it shows up in BOTH arrays, so the count is `min(countA, countB)`.

```
shelfA = [1, 2, 2, 4]
shelfB = [2, 4, 4, 5]
answer = [2, 4]
```
Why only one 2? `shelfB` has only ONE 2. Why only one 4? `shelfA` has only ONE 4.

## Blank mind in the interview? Ask three small questions
1. Can I solve it by hand on a tiny example?
2. What is the dumbest thing that works? (brute force)
3. What does it cost? Then improve it one step at a time.

Never jump straight to the optimal answer. It looks memorised. Start with the brute force, state its cost, then improve it.

## The approaches
| Folder | Idea | Use it when |
|---|---|---|
| [Brute](Brute/pseudocode.md) | For each book in A, find an unused copy in B (`taken`) | Warm-up only |
| [Optimal/1-TwoPointers](Optimal/1-TwoPointers/pseudocode.md) | Compare the two fronts, move the smaller one | Both sorted (follow-up 1) |
| [Optimal/2-BinarySearch](Optimal/2-BinarySearch/pseudocode.md) | For each book in the small array, binary search the big one | Sorted, and one array is much smaller (follow-up 2) |
| [Optimal/3-HashMapCounts](Optimal/3-HashMapCounts/pseudocode.md) | Count the smaller array, walk the bigger one | Not sorted (+ `intersectSmallValues` when values are 0 to 1000) |
| [FollowUp3-OnDisk](FollowUp3-OnDisk/pseudocode.md) | Count the small array, stream the big one chunk by chunk | The big array lives on disk (follow-up 3) |

## Which one should I pick?
```
Are both sorted?
├── Yes ── Is one side tiny? ── Yes ── Binary Search
│                            └─ No ─── Two Pointers
└── No ─── Do they fit in memory?
           ├── Yes ── Hash Map Counts of the smaller one
           │          (values 0 to 1000? intersectSmallValues)
           └── No ─── Counts of the small one + stream the big one (intersectOnDisk)
                      Both huge? External sort, then Two Pointers while streaming
```

## Complexity (n = size of shelfA, m = size of shelfB)
| Approach | Time | Extra space (not counting `common`) |
|---|---|---|
| Brute (nested loops + taken) | O(n x m) | O(m) |
| Two Pointers (sorted) | O(n + m) | O(1) |
| Binary Search (sorted) | O(small x log big) | O(1) |
| Hash Map Counts (any order) | O(n + m) | O(min(n, m)) |
| Small values (0..1000) | O(n + m) | O(1), 1001 slots |
| On disk (counts of the small shelf) | O(n + m) | O(small) + one chunk |
| Sort first, then Two Pointers | O(n log n + m log m) | depends on the sort |

**Space, honestly:** the answer list `common` is returned, so it is not counted as extra space. Two Pointers is O(1) extra only because the inputs are already sorted. If you sort them first, the sort's memory counts:
- Java `Arrays.sort` on ints and C++ `std::sort` use about O(log n) stack.
- Python `sort` and JavaScript (V8) use TimSort, which can take up to O(n).

## Folder layout
Every approach folder has `pseudocode.md` and the same code in `Java/`, `C++/`, `Python/` and `JS/`. Every file runs as it is and prints `Intersection: [2, 4]`.

```
javac IntersectSorted.java && java IntersectSorted
g++ intersect_sorted.cpp -o intersect_sorted && ./intersect_sorted
python intersect_sorted.py
node intersectSorted.js
```

## Submitting on LeetCode
LeetCode 350 names the method `intersect(nums1, nums2)` and its arrays are **not** sorted. You can submit Hash Map Counts as it is (rename the method). For Two Pointers or Binary Search, sort both arrays first.

## Rebuild it (pause, say it out loud, then check)
- The key observation is... *the arrays are sorted, so the smaller front can never meet a partner later.*
- When the fronts are equal I... *add one copy and move both pointers.*
- It costs... *O(n + m) time, O(1) extra space.*

Next up: **Majority Element I**.
