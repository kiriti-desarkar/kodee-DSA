def merge(nums, low, mid, high):
    temp = []
    left = low
    right = mid + 1
    while left <= mid and right <= high:
        if nums[left] <= nums[right]:
            temp.append(nums[left])
            left += 1
        else:
            temp.append(nums[right])
            right += 1
    while left <= mid:
        temp.append(nums[left])
        left += 1
    while right <= high:
        temp.append(nums[right])
        right += 1
    nums[low:high + 1] = temp


def merge_sort(nums, low, high):
    if low >= high:
        return
    mid = low + (high - low) // 2
    merge_sort(nums, low, mid)
    merge_sort(nums, mid + 1, high)
    merge(nums, low, mid, high)


nums = [5, 2, 8, 1]
merge_sort(nums, 0, len(nums) - 1)
print(nums)  # [1, 2, 5, 8]
