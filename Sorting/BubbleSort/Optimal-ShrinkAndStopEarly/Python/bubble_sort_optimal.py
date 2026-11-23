def bubble_sort(nums):
    # after each pass, the biggest bubble rises to sorted_end
    for sorted_end in range(len(nums) - 1, 0, -1):
        swapped = False
        for curr_bubble in range(sorted_end):
            next_bubble = curr_bubble + 1
            if nums[curr_bubble] > nums[next_bubble]:
                nums[curr_bubble], nums[next_bubble] = nums[next_bubble], nums[curr_bubble]
                swapped = True
        # a pass with no swaps means the array is already sorted
        if not swapped:
            break


# Run it locally: python bubble_sort_optimal.py
if __name__ == "__main__":
    nums = [7, 2, 8, 1, 5]
    bubble_sort(nums)
    print(nums)
