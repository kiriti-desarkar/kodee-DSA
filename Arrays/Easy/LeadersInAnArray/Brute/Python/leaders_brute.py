def leaders_brute(nums):
    size = len(nums)
    leaders = []
    for scan in range(size):
        is_leader = True
        for right in range(scan + 1, size):
            if nums[right] >= nums[scan]:
                is_leader = False
                break
        if is_leader:
            leaders.append(nums[scan])
    return leaders


print(leaders_brute([4, 9, 2, 6, 3]))
