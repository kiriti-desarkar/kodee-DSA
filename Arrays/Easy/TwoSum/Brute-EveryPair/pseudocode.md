# R1 Brute: try every pair
```
for first = 0 to n-1:
    for second = first+1 to n-1:
        if nums[first] + nums[second] == target:
            return [first, second]
return []
```
Why `second` starts at `first + 1`: no number pairs with itself, and each pair is tried once.
Check on eight cards [11, 4, 15, 9, 2, 13, 7, 6], target 9: 11 with all seven partners, then 4, 15 and 9 find nothing; 2 + 13 no, 2 + 7 = 9 → [4, 6] after 24 checks.
Cost: n × (n − 1) ÷ 2 checks. 20 numbers: 19 + 18 + ... + 1 = 190 tries. O(n²) time, O(1) extra space.
