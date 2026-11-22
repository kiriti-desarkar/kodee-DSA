def remove_duplicates(nums):
    unique = sorted(set(nums))
    for write in range(len(unique)):
        nums[write] = unique[write]
    return len(unique)


if __name__ == "__main__":
    nums = [1, 1, 2]
    count = remove_duplicates(nums)
    print(count, nums[:count])
