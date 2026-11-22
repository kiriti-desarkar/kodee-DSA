def search(nums, target):
    low = 0
    high = len(nums) - 1
    while low <= high:
        mid = low + (high - low) // 2
        if nums[mid] == target:
            return mid
        if target > nums[mid]:
            low = mid + 1
        else:
            high = mid - 1
    return -1


if __name__ == "__main__":
    nums = [2, 5, 8, 12, 16, 23, 38, 56]
    target = 23
    print(search(nums, target))
