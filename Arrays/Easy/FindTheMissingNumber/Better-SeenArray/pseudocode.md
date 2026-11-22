# Better: tick what you see

Tick each number in a seen array, then find the unticked one.

```
seen = array of total + 1 falses
for each value in nums: seen[value] = true
for wanted from 1 to total:
    if not seen[wanted]: return wanted
```

O(n) time, O(n) extra space for seen.
