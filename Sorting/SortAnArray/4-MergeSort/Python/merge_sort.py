def sort_array(nums):
    merge_sort_helper(nums, 0, len(nums) - 1)
    return nums


def merge_sort_helper(nums, low, high):
    # one number is already sorted
    if low >= high:
        return
    mid = (low + high) // 2
    merge_sort_helper(nums, low, mid)
    merge_sort_helper(nums, mid + 1, high)
    merge(nums, low, mid, high)


def merge(nums, low, mid, high):
    merged = []
    left_spot = low
    right_spot = mid + 1
    # always take the smaller front number of the two sorted halves
    while left_spot <= mid and right_spot <= high:
        if nums[left_spot] <= nums[right_spot]:
            merged.append(nums[left_spot])
            left_spot += 1
        else:
            merged.append(nums[right_spot])
            right_spot += 1
    merged.extend(nums[left_spot:mid + 1])
    merged.extend(nums[right_spot:high + 1])
    nums[low:high + 1] = merged


# Run it locally: python merge_sort.py
if __name__ == "__main__":
    print(sort_array([5, 2, 3, 1]))
