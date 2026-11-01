# Brute Force: nested loops + `taken`

## Idea
For every book in `shelfA`, scan `shelfB` for a copy you have not used yet. Mark it `taken`, so the same copy can't be paired twice.

## Pseudocode
```
intersectBrute(shelfA, shelfB):
    common = empty list
    taken = list of false, one per book of shelfB
    for book in shelfA:
        for spotB from 0 to sizeB - 1:
            if taken[spotB] is false and shelfB[spotB] == book:
                taken[spotB] = true
                add book to common
                stop the inner loop
    return common
```

## Why `taken`?
Without it, the second 2 in `shelfA` grabs the SAME 2 in `shelfB` again. You get `[2, 2, 4]`, which is wrong. `shelfB` has only one 2.

## Dry run: shelfA = [1, 2, 2, 4], shelfB = [2, 4, 4, 5]
| book | scan of shelfB | taken | common |
|---|---|---|---|
| 1 | no 1 anywhere | F F F F | [] |
| 2 | spot 0 is 2 and free | T F F F | [2] |
| 2 | spot 0 is taken, no other 2 | T F F F | [2] |
| 4 | spot 1 is 4 and free | T T F F | [2, 4] |

## Cost
- Time O(n x m): for each of the n books, scan up to m books.
- Extra space O(m), for `taken`.
- It ignores the gift that both arrays are **sorted**. The optimal answers use it.
