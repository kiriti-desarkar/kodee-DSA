def fourSum(nums, target):
    nums.sort()
    quads = []
    for first in range(len(nums) - 3):
        if first > 0 and nums[first] == nums[first - 1]:
            continue
        for second in range(first + 1, len(nums) - 2):
            if second > first + 1 and nums[second] == nums[second - 1]:
                continue
            left = second + 1
            right = len(nums) - 1
            while left < right:
                sum = nums[first] + nums[second] + nums[left] + nums[right]
                if sum < target:
                    left += 1
                elif sum > target:
                    right -= 1
                else:
                    quads.append([nums[first], nums[second], nums[left], nums[right]])
                    left += 1
                    right -= 1
                    # skip repeats so the same group is not added twice
                    while left < right and nums[left] == nums[left - 1]:
                        left += 1
                    while left < right and nums[right] == nums[right + 1]:
                        right -= 1
    return quads


# Run it locally: python four_sum_optimal.py
if __name__ == "__main__":
    print(fourSum([1, 0, -1, 0, -2, 2], 0))
    print(fourSum([2, 2, 2, 2, 2], 8))
    print(fourSum([1000000000, 1000000000, 1000000000, 1000000000], -294967296))
