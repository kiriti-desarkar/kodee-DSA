# Brute: a set of unique values

Copy the values into a sorted set, then write them back to the front.

```
unique = the distinct values of nums, in order
for write from 0 to length of unique - 1:
    nums[write] = unique[write]
return length of unique
```

O(n log n) with a sorted set (O(n) with a hash set that keeps order), O(n) extra space.
