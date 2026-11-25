# R2 Optimal (LeetCode 1): one pass with a hash map
```
seen = empty map            (number -> position)
for second = 0 to n-1:
    need = target - nums[second]
    if need in seen: return [seen[need], second]
    seen[nums[second]] = second
return []
```
Derivation: from the second number's side, the brute's inner loop only asks "is target minus me somewhere before me?". Scanning back is the slow part, so remember what you've seen.
Check FIRST, then remember: with [3, 3], target 6, remembering first makes the first 3 find itself.
Check on eight cards [11, 4, 15, 9, 2, 13, 7, 6], target 9: 11, 4, 15 and 9 ask and are remembered; 2 needs 7, remember; 13, nothing; 7 needs 2: seen[2] = 4 → [4, 6], seven checks.
Why a hash map is O(1): the key goes through a formula (hashing) to one slot of an array; the same key always gives the same slot, so nothing is scanned. Two keys can share a slot (a collision, e.g. 3 and 19 with 16 slots), so each slot keeps a short list; a good formula keeps the lists tiny, so a lookup is O(1) on average.
Names: Java `java.util.HashMap` (fully qualified, no import), Python dict, C++ `unordered_map`, JavaScript `Map`.
Complexity: O(n) time (at most 20 checks for 20 numbers), O(n) extra space.
