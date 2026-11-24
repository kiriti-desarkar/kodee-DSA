def sort_array(nums):
    # each pass selects the smallest of the rest and puts it at front_slot
    for front_slot in range(len(nums) - 1):
        smallest_spot = front_slot
        for candidate in range(front_slot + 1, len(nums)):
            if nums[candidate] < nums[smallest_spot]:
                smallest_spot = candidate
        if smallest_spot != front_slot:
            nums[front_slot], nums[smallest_spot] = nums[smallest_spot], nums[front_slot]
    return nums


# Run it locally: python selection_sort.py
if __name__ == "__main__":
    print(sort_array([5, 2, 3, 1]))
