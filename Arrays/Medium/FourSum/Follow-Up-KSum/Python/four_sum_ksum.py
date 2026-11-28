def fourSum(nums, target):
    nums.sort()
    return kSum(nums, target, 0, 4)


def kSum(nums, target, start, k):
    groups = []
    if k == 2:
        left = start
        right = len(nums) - 1
        while left < right:
            sum = nums[left] + nums[right]
            if sum < target:
                left += 1
            elif sum > target:
                right -= 1
            else:
                groups.append([nums[left], nums[right]])
                left += 1
                right -= 1
                # skip repeats so the same group is not added twice
                while left < right and nums[left] == nums[left - 1]:
                    left += 1
                while left < right and nums[right] == nums[right + 1]:
                    right -= 1
        return groups
    for pick in range(start, len(nums) - k + 1):
        if pick > start and nums[pick] == nums[pick - 1]:
            continue
        for rest in kSum(nums, target - nums[pick], pick + 1, k - 1):
            groups.append([nums[pick]] + rest)
    return groups


# Run it locally: python four_sum_ksum.py
if __name__ == "__main__":
    print(fourSum([1, 0, -1, 0, -2, 2], 0))
    print(fourSum([2, 2, 2, 2, 2], 8))
    print(fourSum([1000000000, 1000000000, 1000000000, 1000000000], -294967296))
