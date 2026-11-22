def rotate_by_one(nums):
    first = nums[0]
    for scan in range(1, len(nums)):
        nums[scan - 1] = nums[scan]
    nums[len(nums) - 1] = first


if __name__ == "__main__":
    nums = [1, 2, 3, 4, 5]
    rotate_by_one(nums)
    print(nums)
