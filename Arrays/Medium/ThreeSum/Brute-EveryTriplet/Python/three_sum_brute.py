def threeSum(nums):
    found = set()
    for first in range(len(nums)):
        for second in range(first + 1, len(nums)):
            for third in range(second + 1, len(nums)):
                if nums[first] + nums[second] + nums[third] == 0:
                    # sorted, so the same three numbers always look the same
                    triplet = tuple(sorted((nums[first], nums[second], nums[third])))
                    found.add(triplet)
    return [list(triplet) for triplet in found]


# Run it locally: python three_sum_brute.py
if __name__ == "__main__":
    nums = [-1, 0, 1, 2, -1, -4]
    print(threeSum(nums))
