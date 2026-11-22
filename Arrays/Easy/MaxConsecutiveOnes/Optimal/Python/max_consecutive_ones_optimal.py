def find_max_consecutive_ones(nums):
    max_count = 0
    current = 0
    for light in nums:
        if light == 1:
            current += 1
            if current > max_count:
                max_count = current
        else:
            current = 0
    return max_count


if __name__ == "__main__":
    nums = [1, 1, 0, 1, 1, 1]
    print(find_max_consecutive_ones(nums))
