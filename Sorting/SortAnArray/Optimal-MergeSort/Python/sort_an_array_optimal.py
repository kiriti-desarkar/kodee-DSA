def sort_array(nums):
    sort_range(nums, 0, len(nums) - 1)
    return nums


def sort_range(nums, low, high):
    if low >= high:
        return
    mid = low + (high - low) // 2
    sort_range(nums, low, mid)
    sort_range(nums, mid + 1, high)
    merge(nums, low, mid, high)


def merge(nums, low, mid, high):
    merged = []
    left_spot = low
    right_spot = mid + 1
    while left_spot <= mid and right_spot <= high:
        if nums[left_spot] <= nums[right_spot]:
            merged.append(nums[left_spot])
            left_spot += 1
        else:
            merged.append(nums[right_spot])
            right_spot += 1
    while left_spot <= mid:
        merged.append(nums[left_spot])
        left_spot += 1
    while right_spot <= high:
        merged.append(nums[right_spot])
        right_spot += 1
    for copy in range(len(merged)):
        nums[low + copy] = merged[copy]


if __name__ == "__main__":
    nums = [5, 2, 3, 1]
    print(sort_array(nums))
