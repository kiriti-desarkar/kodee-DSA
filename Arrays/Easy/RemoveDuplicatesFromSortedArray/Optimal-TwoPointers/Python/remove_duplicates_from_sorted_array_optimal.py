def remove_duplicates(nums):
    write = 1
    for read in range(1, len(nums)):
        if nums[read] != nums[write - 1]:
            nums[write] = nums[read]
            write += 1
    return write


if __name__ == "__main__":
    nums = [1, 1, 2]
    count = remove_duplicates(nums)
    print(count, nums[:count])
