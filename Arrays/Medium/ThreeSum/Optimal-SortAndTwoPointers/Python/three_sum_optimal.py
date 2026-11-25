def threeSum(nums):
    nums.sort()
    triplets = []
    for first in range(len(nums) - 2):
        # same first number as last time: its triplets are already found
        if first > 0 and nums[first] == nums[first - 1]:
            continue
        left = first + 1
        right = len(nums) - 1
        while left < right:
            sum = nums[first] + nums[left] + nums[right]
            if sum < 0:
                left += 1
            elif sum > 0:
                right -= 1
            else:
                triplets.append([nums[first], nums[left], nums[right]])
                left += 1
                right -= 1
                # skip repeats so the same triplet is not added twice
                while left < right and nums[left] == nums[left - 1]:
                    left += 1
                while left < right and nums[right] == nums[right + 1]:
                    right -= 1
    return triplets


# Run it locally: python three_sum_optimal.py
if __name__ == "__main__":
    nums = [-1, 0, 1, 2, -1, -4]
    print(threeSum(nums))
