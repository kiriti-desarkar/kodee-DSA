def sort_array(nums):
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
    return nums


# Run it locally: python bubble_sort.py
if __name__ == "__main__":
    print(sort_array([5, 2, 3, 1]))
