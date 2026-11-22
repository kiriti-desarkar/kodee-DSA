def quick_sort(nums):
    sort_range(nums, 0, len(nums) - 1)


def sort_range(nums, low, high):
    if low >= high:
        return
    pivot_spot = partition(nums, low, high)
    sort_range(nums, low, pivot_spot - 1)
    sort_range(nums, pivot_spot + 1, high)


def partition(nums, low, high):
    pivot = nums[high]
    wall = low
    for scan in range(low, high):
        if nums[scan] <= pivot:
            nums[wall], nums[scan] = nums[scan], nums[wall]
            wall += 1
    nums[wall], nums[high] = nums[high], nums[wall]
    return wall


if __name__ == "__main__":
    nums = [7, 2, 8, 1, 5]
    quick_sort(nums)
    print(nums)
