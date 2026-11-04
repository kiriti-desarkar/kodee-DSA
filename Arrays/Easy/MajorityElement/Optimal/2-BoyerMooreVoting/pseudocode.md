# Optimal 2: Boyer-Moore Voting

## Derive it under stress (the books now have titles and roll past once, on a belt)
1. **What costs me, or breaks, now?** Counting needs numbers, or a big table, or many passes.
2. **What can I throw away, and still keep the answer?** Take two books with DIFFERENT volumes and send them away together. The majority survives (proof below).
3. **What small thing must I keep?** Not the pairs. Only the one volume still waiting, and how many copies of it are waiting: `candidate` and `votes`.

## Pseudocode
```
majorityElement(shelf):
    candidate = nothing
    votes = 0
    for volume in shelf:
        if votes == 0:
            candidate = volume
        if volume == candidate:
            votes = votes + 1
        else:
            votes = votes - 1
    return candidate
```
Same volume: votes up. Different volume: votes down (one pair is gone). Votes at zero: the next book becomes the candidate.

## Why it works (proof)
Let m be the majority. It has more than half of the books.
- Take away a pair of DIFFERENT books. At most one of them is m. So m loses at most one copy, the shelf loses two books, and the half-line drops by one: `copies - 1 > (size - 2) / 2`. m is still a majority of what is left.
- Repeat until nothing different can be paired. Then only copies of one volume are left. A majority still exists in that group, so it is m.
- Pairs must be different. Two 7s leaving together would break the proof.

## Dry run: shelf = [3, 7, 7, 5, 7]
| pass | volume | rule | candidate | votes |
|---|---|---|---|---|
| start | | | nothing | 0 |
| 1 | 3 | votes 0, so 3 becomes candidate; it matches | 3 | 1 |
| 2 | 7 | different: 3 and 7 leave as a pair | 3 | 0 |
| 3 | 7 | votes 0, so 7 becomes candidate; it matches | 7 | 1 |
| 4 | 5 | different: another pair leaves | 7 | 0 |
| 5 | 7 | votes 0, so 7 becomes candidate again | 7 | 1 |

The loop ends: candidate 7. The candidate switched, but the rules never lost the majority.

## No majority promised? The verify pass (`majorityOrNone`, in the same code files)
```
    (after the loop above)
    count = number of books in shelf equal to candidate
    if count > size / 2:
        return candidate
    else:
        return none
```
Example `[2, 2, 1, 1, 3, 1]`: 6 books, and 1 has only 3 copies, not more than 3, so there is no majority. The walk ends with candidate 3. Boyer-Moore did not fail: when no majority exists, the candidate is only a guess. Count it: 1 copy, not more than 3, so no majority.

With no promise, "most common" is not enough either: in `[4, 4, 1, 2, 3]`, 4 is the most common, but 2 copies is not more than 2.5.

The code returns -1 for "none" to stay short. Real code returns `null` (Java `Integer`), `None` (Python), `null` (JavaScript), or `std::optional` / a flag (C++), because -1 could be a real volume.

## Cost
- Time O(n): one pass (two with verify).
- Extra space O(1): two variables. The shelf is never changed.
- Works on any type that can be compared for equality: numbers, titles, a stream you see once.

## In an interview, say it in steps
1. Count every volume: n x n.
2. Remember counts in a hash map, or vote per bit: O(n).
3. Pair off different books, keep a candidate and its votes: O(n) time, O(1) space.
4. Trace a small example out loud.

## Next: LeetCode 229 (more than n / 3)
Keep two candidates, each with its own votes. A book that matches neither cancels one vote from each (a triple leaves together); a new book fills an empty slot; always verify. More than n / k means k - 1 candidates.
