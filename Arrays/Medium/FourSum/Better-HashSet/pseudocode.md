# R2 Better: fix first and second, then Two Sum with a hash set
```
found = empty set
for each first:
    for each second after first:
        seen = empty set
        for each third after second:
            need = target - nums[first] - nums[second] - nums[third]   (in long)
            if need in seen: sort the four, add to found
            add nums[third] to seen
return everything in found
```
Derivation: in the brute, once first, second and third are fixed, fourth walks the rest of the row looking for ONE number, `need`. That is Two Sum, so remember the cards third has passed.
Two rules: `seen` empties for every (first, second) pair (it holds only cards after second), and check BEFORE you add (a card can't pair with itself).
Check on example 1: 6 cards = 6 × 5 × 4 ÷ 6 = 20 checks; `found` still throws the repeats away.
Complexity: O(n³) time, O(n) extra space for seen (plus the set).
