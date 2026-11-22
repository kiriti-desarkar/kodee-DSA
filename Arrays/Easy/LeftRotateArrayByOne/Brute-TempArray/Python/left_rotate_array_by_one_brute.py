def rotate_by_one(nums):
    size = len(nums)
    moved = [0] * size
    for scan in range(1, size):
        moved[scan - 1] = nums[scan]
    moved[size - 1] = nums[0]
    for scan in range(size):
        nums[scan] = moved[scan]


if __name__ == "__main__":
    nums = [1, 2, 3, 4, 5]
    rotate_by_one(nums)
    print(nums)
