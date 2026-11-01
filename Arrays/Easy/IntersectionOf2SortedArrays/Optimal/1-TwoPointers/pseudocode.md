# Optimal 1: Two Pointers (both sorted, LeetCode follow-up 1)

## Derive it under stress
1. **Is there an order I can use?** Yes, both arrays are sorted.
2. **Where can the answer hide?** Look at the fronts. Everything behind a front is even bigger.
3. **What does the smaller front tell me?** It can never find a partner, because every book left on the other shelf is bigger. So skip it.

## Pseudocode
```
intersectSorted(shelfA, shelfB):
    common = empty list
    spotA = 0
    spotB = 0
    while spotA < sizeA and spotB < sizeB:
        if shelfA[spotA] < shelfB[spotB]:
            spotA = spotA + 1
        else if shelfA[spotA] > shelfB[spotB]:
            spotB = spotB + 1
        else:
            add shelfA[spotA] to common
            spotA = spotA + 1
            spotB = spotB + 1
    return common
```

## Why it works (proof)
- **Smaller front:** say `shelfA[spotA] < shelfB[spotB]`. Every book from `spotB` onwards is at least `shelfB[spotB]`, so it is bigger than `shelfA[spotA]`. That book has no partner left, and skipping it loses nothing.
- **Equal fronts:** pair them. Each copy is used exactly once, so you get `min(countA, countB)` copies of every value.
- **One shelf runs out:** nothing left to pair with, so stop. No leftover loops are needed.

## Dry run: shelfA = [1, 2, 2, 4], shelfB = [2, 4, 4, 5]
| spotA | spotB | compare | action | common |
|---|---|---|---|---|
| 0 | 0 | 1 < 2 | spotA++ | [] |
| 1 | 0 | 2 == 2 | add 2, move both | [2] |
| 2 | 1 | 2 < 4 | spotA++ | [2] |
| 3 | 1 | 4 == 4 | add 4, move both | [2, 4] |
| 4 | 2 | shelfA ran out | stop | [2, 4] |

## Cost
- Time O(n + m): every step moves at least one pointer.
- Extra space O(1).
- Same idea as the merge step of Merge Sort, and the Union episode.
