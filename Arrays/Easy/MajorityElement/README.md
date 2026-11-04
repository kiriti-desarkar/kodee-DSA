# Majority Element I (LeetCode 169)

Short revision notes for the LearnWithKiriti episode, starring Kodee.

## Problem
An array `shelf` of `size` numbers. Return the value that appears **more than `size / 2` times** (on more than half the shelf). LeetCode promises it exists.

```
shelf  = [3, 7, 7, 5, 7]
answer = 7
```
Why 7? It is on 3 of the 5 books. Half of 5 is 2.5, and 3 is more than that. "More than half" is not the same as "most common".

## Blank mind in the interview? Ask three small questions
1. What would I do by hand, on a tiny example?
2. What is the dumbest thing that works? (brute force)
3. What does it cost? Then improve it one step at a time.

Never jump straight to the optimal answer. It looks memorised. Start with the brute force, state its cost, then improve it.

## The approaches
| Folder | Idea | Use it when |
|---|---|---|
| [Brute](Brute/pseudocode.md) | For each volume, count its copies on the whole shelf | Warm-up only |
| [Better-HashMap](Better-HashMap/pseudocode.md) | One walk, `copiesOf[volume]++`, return when a count passes half | Memory is no problem, you want it simple |
| [Optimal/1-BitCounting](Optimal/1-BitCounting/pseudocode.md) | For each of the 32 bits, count the ones; a bit with more than half the votes belongs to the answer | O(1) space, integers only |
| [Optimal/2-BoyerMooreVoting](Optimal/2-BoyerMooreVoting/pseudocode.md) | Pair off two DIFFERENT values and throw both away: keep only `candidate` and `votes` (+ `majorityOrNone`, the verify pass) | Any type, a stream, or no majority promised |

## Which one should I pick?
```
Is a majority promised?
├── Yes ── Memory is no problem, want it simple? ── Hash map counting
│          Numbers only, want O(1) space? ───────── Bit counting
│          Titles, any comparable type, a stream? ─ Boyer-Moore Voting
└── No ─── Boyer-Moore, then verify (majorityOrNone)
```
Other ways exist: sort and take the middle, pick at random, or divide and conquer. None beats these two optimals in an interview.

## Complexity (n = size of shelf)
| Approach | Time | Extra space | Passes | Works on |
|---|---|---|---|---|
| Brute (count every volume) | O(n x n) | O(1) | n scans | any type that compares |
| Hash map counting | O(n) | O(n), one entry per different volume | 1 | any type that hashes |
| Bit counting | O(32 x n) = O(n) | O(1) | 32 | integers only |
| Boyer-Moore Voting | O(n) | O(1) | 1 (2 with verify) | any type that compares for equality |

**Space, honestly:**
- Hash map: the map holds one entry per DIFFERENT volume. That is up to about n / 2 entries, so O(n), not O(1).
- Bit counting is O(1) because a number has a fixed 32 bits. It only works on integers. Bit 31 is the sign bit:
  - Java `int` and JavaScript `|` are 32-bit signed, so turning bit 31 on gives the right negative number.
  - C++ builds `answer` as an `unsigned int` (shifting a 1 into the sign bit of a signed `int` is not safe), then casts back to `int`.
  - Python ints have no fixed size, so `answer` can reach `2 ** 31` or more. Subtract `2 ** 32` to get the negative number back.
- Boyer-Moore: two variables, and it never changes the shelf.

## No majority promised? The verify pass
If a majority exists, Boyer-Moore's `candidate` is it. If none exists, the candidate is just a guess. Example `[2, 2, 1, 1, 3, 1]`: no value is on more than 3 books, yet the walk ends with candidate 3. So walk once more, count the candidate, and compare with half (`majorityOrNone` in the Boyer-Moore files). Still O(n) time, O(1) space.

Our code returns `-1` for "no majority" to keep it short. But -1 could be a real volume: in real code return `null` (Java `Integer`), `None` (Python), `null` (JavaScript), or `std::optional` / a flag in C++.

## Bridge: LeetCode 229, Majority Element II (more than n / 3)
At most TWO values can be on more than a third of the shelf (three of them would need more than the whole shelf). So keep two candidates, each with its own votes. A book that matches neither cancels one vote from EACH (a triple leaves together). Always verify both at the end.

The general rule: **more than n / k means at most k - 1 candidates.** Full code in a later episode.

## Folder layout
Every approach folder has `pseudocode.md` and the same code in `Java/`, `C++/`, `Python/` and `JS/`. The code is exactly what is on screen. Every file runs as it is and prints `Majority: 7`.

```
javac MajorityMoore.java && java MajorityMoore
g++ majority_moore.cpp -o majority_moore && ./majority_moore
python majority_moore.py
node majorityMoore.js
```

## Submitting on LeetCode
LeetCode 169 names the method `majorityElement(nums)` (Python: `majorityElement(self, nums)` inside `class Solution`). Copy the function body and rename `shelf` to `nums`. The final `return -1` is never reached, because LeetCode promises a majority.

## Rebuild it (pause, say it out loud, then check)
- The key observation is... *pairing off two different books never removes the majority.*
- When the value differs I... *take one vote away, because that pair leaves together.*
- It costs... *O(n) time, O(1) space.*

Next up: **Leaders in an Array** (the idea behind LeetCode 1299).
