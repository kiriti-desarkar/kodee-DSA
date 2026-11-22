def bubble_sort(nums):
    size = len(nums)
    for pass_number in range(size - 1):
        for scan in range(size - 1):
            if nums[scan] > nums[scan + 1]:
                nums[scan], nums[scan + 1] = nums[scan + 1], nums[scan]


if __name__ == "__main__":
    nums = [7, 2, 8, 1, 5]
    bubble_sort(nums)
    print(nums)
