def sort_array(nums):
    quick_sort_helper(nums, 0, len(nums) - 1)
    return nums


def quick_sort_helper(nums, low, high):
    # one number is already sorted
    if low >= high:
        return
    pivot_spot = partition(nums, low, high)
    quick_sort_helper(nums, low, pivot_spot - 1)
    quick_sort_helper(nums, pivot_spot + 1, high)


def partition(nums, low, high):
    pivot = nums[high]
    # everything left of wall is <= pivot
    wall = low
    for scan in range(low, high):
        if nums[scan] <= pivot:
            nums[wall], nums[scan] = nums[scan], nums[wall]
            wall += 1
    nums[wall], nums[high] = nums[high], nums[wall]
    return wall


# Run it locally: python quick_sort.py
if __name__ == "__main__":
    print(sort_array([5, 2, 3, 1]))
