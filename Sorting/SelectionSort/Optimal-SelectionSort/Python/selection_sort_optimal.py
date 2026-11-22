def selection_sort(nums):
    size = len(nums)
    for sorted_end in range(size - 1):
        min_spot = sorted_end
        for scan in range(sorted_end + 1, size):
            if nums[scan] < nums[min_spot]:
                min_spot = scan
        if min_spot != sorted_end:
            nums[sorted_end], nums[min_spot] = nums[min_spot], nums[sorted_end]


if __name__ == "__main__":
    nums = [7, 2, 8, 1, 5]
    selection_sort(nums)
    print(nums)
