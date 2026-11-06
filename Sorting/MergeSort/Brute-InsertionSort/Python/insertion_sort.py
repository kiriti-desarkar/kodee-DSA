def insertion_sort(nums):
    for pick in range(1, len(nums)):
        value = nums[pick]
        scan = pick - 1
        while scan >= 0 and nums[scan] > value:
            nums[scan + 1] = nums[scan]
            scan -= 1
        nums[scan + 1] = value


nums = [5, 2, 8, 1]
insertion_sort(nums)
print(nums)  # [1, 2, 5, 8]
