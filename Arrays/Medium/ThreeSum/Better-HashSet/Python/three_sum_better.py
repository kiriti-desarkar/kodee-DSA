def threeSum(nums):
    found = set()
    for first in range(len(nums)):
        # Two Sum on the numbers after first, with target -nums[first]
        seen = set()
        for second in range(first + 1, len(nums)):
            need = -(nums[first] + nums[second])
            if need in seen:
                triplet = tuple(sorted((nums[first], nums[second], need)))
                found.add(triplet)
            seen.add(nums[second])
    return [list(triplet) for triplet in found]


# Run it locally: python three_sum_better.py
if __name__ == "__main__":
    nums = [-1, 0, 1, 2, -1, -4]
    print(threeSum(nums))
