def find_leaders(nums):
    size = len(nums)
    max_right = nums[size - 1]
    leaders = [max_right]
    for scan in range(size - 2, -1, -1):
        if nums[scan] > max_right:
            max_right = nums[scan]
            leaders.append(max_right)
    leaders.reverse()
    return leaders


print(find_leaders([4, 9, 2, 6, 3]))
