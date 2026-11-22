def search(nums, target):
    for scan in range(len(nums)):
        if nums[scan] == target:
            return scan
    return -1


if __name__ == "__main__":
    nums = [2, 5, 8, 12, 16, 23, 38, 56]
    target = 23
    print(search(nums, target))
