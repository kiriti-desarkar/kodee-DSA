# Better: fix first, then Two Sum with a hash set

```
found = empty set
for first = 0 to n-1:
    seen = empty set                     (numbers between first and second)
    for second = first+1 to n-1:
        need = -(nums[first] + nums[second])
        if need in seen:
            found.add( sorted(nums[first], nums[second], need) )
        seen.add(nums[second])
return found as a list
```
Derivation: in the brute, once first and second are chosen, the third loop only asks "is -(first + second) somewhere after second?". That is Two Sum's question, so remember what you've seen instead of scanning.
Why seen is emptied for every first: it must hold only numbers AFTER first, so the third number is never first itself or a number already used as first.
Check first, then remember (as in Two Sum), so second never pairs with itself.
Cost with 20 numbers: at most 19 + 18 + ... + 1 = 190 checks.
Complexity: O(n²) time, O(n) for seen plus the set of triplets.
