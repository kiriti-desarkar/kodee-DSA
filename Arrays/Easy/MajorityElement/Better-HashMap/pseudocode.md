# Better: Hash Map Counting

## Derive it under stress
1. **What am I doing again and again?** The inner loop recounts the same volume every time it appears.
2. **What could I remember instead?** How many copies of each volume I have seen so far.
3. **What remembers things by value?** A hash map, from volume to number of copies: `copiesOf`.

## Pseudocode
```
majorityElement(shelf):
    size = number of books in shelf
    copiesOf = empty map, a missing volume counts as 0
    for volume in shelf:
        copiesOf[volume] = copiesOf[volume] + 1
        if copiesOf[volume] > size / 2:
            return volume
```

## Why it works (proof)
- `copiesOf[volume]` always holds how many copies of `volume` we have seen so far.
- The majority has more than half of the books, so at some point its count must pass half.
- Nothing else can pass half first: two volumes can't both own more than half of the same shelf.

## Dry run: shelf = [3, 7, 7, 5, 7], size = 5, so we need a count above 2
| volume | copiesOf after it | more than 2? |
|---|---|---|
| 3 | {3: 1} | no |
| 7 | {3: 1, 7: 1} | no |
| 7 | {3: 1, 7: 2} | no |
| 5 | {3: 1, 7: 2, 5: 1} | no |
| 7 | {3: 1, 7: 3, 5: 1} | yes, return 7 |

## Cost
- Time O(n): one pass. A 100,000-book shelf takes 100,000 steps, not 10 billion.
- Extra space O(n): one entry per different volume.

## Lines that confuse people
- Java `copiesOf.getOrDefault(volume, 0)`: the count for this volume, or 0 if it isn't there yet. Python `copies_of.get(volume, 0)` is the same.
- C++ `copiesOf[volume]++`: a new key in an `unordered_map` starts at 0, so this just works.
- JavaScript `(copiesOf.get(volume) || 0)`: `get` gives `undefined` for a missing volume, and `|| 0` turns it into 0. `Math.floor(shelf.length / 2)` rounds down, because JavaScript division can leave decimals.
