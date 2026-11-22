def left_rotate(nums, k):
    size = len(nums)
    rounds = k % size
    for round_number in range(rounds):
        first = nums[0]
        for scan in range(1, size):
            nums[scan - 1] = nums[scan]
        nums[size - 1] = first


if __name__ == "__main__":
    nums = [1, 2, 3, 4, 5, 6, 7]
    k = 3
    left_rotate(nums, k)
    print(nums)
