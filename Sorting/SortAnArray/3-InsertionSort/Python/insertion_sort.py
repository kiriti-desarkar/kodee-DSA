def sort_array(nums):
    # everything left of new_book_spot is already sorted
    for new_book_spot in range(1, len(nums)):
        new_book = nums[new_book_spot]
        gap = new_book_spot
        # shift every bigger book one step right to make room
        while gap > 0 and nums[gap - 1] > new_book:
            nums[gap] = nums[gap - 1]
            gap -= 1
        nums[gap] = new_book
    return nums


# Run it locally: python insertion_sort.py
if __name__ == "__main__":
    print(sort_array([5, 2, 3, 1]))
