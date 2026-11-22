def sort_array(nums):
    size = len(nums)
    for next_spot in range(1, size):
        held = nums[next_spot]
        slot = next_spot
        while slot > 0 and nums[slot - 1] > held:
            nums[slot] = nums[slot - 1]
            slot -= 1
        nums[slot] = held
    return nums


if __name__ == "__main__":
    nums = [5, 2, 3, 1]
    print(sort_array(nums))
