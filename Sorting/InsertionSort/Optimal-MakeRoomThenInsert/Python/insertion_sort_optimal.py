def insertion_sort(nums):
    size = len(nums)
    for next_spot in range(1, size):
        held = nums[next_spot]
        slot = next_spot
        while slot > 0 and nums[slot - 1] > held:
            nums[slot] = nums[slot - 1]
            slot -= 1
        nums[slot] = held


if __name__ == "__main__":
    nums = [7, 2, 8, 1, 5]
    insertion_sort(nums)
    print(nums)
