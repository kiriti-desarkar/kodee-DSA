def find_max_consecutive_ones(nums):
    max_count = 0
    for start in range(len(nums)):
        count = 0
        scan = start
        while scan < len(nums) and nums[scan] == 1:
            count += 1
            scan += 1
        max_count = max(max_count, count)
    return max_count


if __name__ == "__main__":
    nums = [1, 1, 0, 1, 1, 1]
    print(find_max_consecutive_ones(nums))
