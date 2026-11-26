# R2 Better: fix first, then Two Sum with a hash set
```
found = empty set
for each first from 0:
    seen = empty set
    for each second after first:
        need = -(nums[first] + nums[second])
        if need in seen: sort the three, add to found
        add nums[second] to seen
return everything in found
```
Derivation: in one row of the brute, first and second are fixed and third walks the whole rest of the row looking for ONE number: minus first, minus second. That is Two Sum with target minus first, so remember the cards second has passed.
Two rules: `seen` empties when first moves (earlier cards already had their turn as first), and check BEFORE you add (a card can't pair with itself).
What a hash set is: an array of slots. A formula turns a number into a hash code, which picks one slot; to check a number, the same formula jumps straight to that slot. Two numbers in one slot is a collision: the slot keeps both and equals tells them apart. O(1) on average.
Check on the nine cards: 36 checks, 5 hits, 2 kept; `found` still throws the repeats away.
Complexity: O(n²) time, O(n) extra space for seen (plus the set).
