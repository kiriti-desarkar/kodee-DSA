def move_zeroes(nums):
    non_zeros = [value for value in nums if value != 0]
    for spot in range(len(nums)):
        nums[spot] = non_zeros[spot] if spot < len(non_zeros) else 0


if __name__ == "__main__":
    nums = [0, 1, 0, 3, 12]
    move_zeroes(nums)
    print(nums)
