def fourSum(nums, target):
    found = set()
    for first in range(len(nums)):
        for second in range(first + 1, len(nums)):
            # fresh for every (first, second): only cards after second
            seen = set()
            for third in range(second + 1, len(nums)):
                need = target - nums[first] - nums[second] - nums[third]
                if need in seen:
                    # sorted, so the same four numbers always look the same
                    quad = sorted([nums[first], nums[second], nums[third], need])
                    found.add(tuple(quad))
                seen.add(nums[third])
    return [list(quad) for quad in found]


# Run it locally: python four_sum_better.py
if __name__ == "__main__":
    print(fourSum([1, 0, -1, 0, -2, 2], 0))
    print(fourSum([2, 2, 2, 2, 2], 8))
    print(fourSum([1000000000, 1000000000, 1000000000, 1000000000], -294967296))
