def left_rotate(nums, k):
    size = len(nums)
    k = k % size
    if k == 0:
        return
    reverse(nums, 0, k - 1)
    reverse(nums, k, size - 1)
    reverse(nums, 0, size - 1)


def reverse(nums, left, right):
    while left < right:
        nums[left], nums[right] = nums[right], nums[left]
        left += 1
        right -= 1


if __name__ == "__main__":
    nums = [1, 2, 3, 4, 5, 6, 7]
    k = 3
    left_rotate(nums, k)
    print(nums)
