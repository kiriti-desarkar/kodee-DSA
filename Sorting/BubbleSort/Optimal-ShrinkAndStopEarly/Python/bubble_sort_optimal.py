def bubble_sort(nums):
    end = len(nums) - 1
    while end > 0:
        swapped = False
        for scan in range(end):
            if nums[scan] > nums[scan + 1]:
                nums[scan], nums[scan + 1] = nums[scan + 1], nums[scan]
                swapped = True
        if not swapped:
            break
        end -= 1


if __name__ == "__main__":
    nums = [7, 2, 8, 1, 5]
    bubble_sort(nums)
    print(nums)
