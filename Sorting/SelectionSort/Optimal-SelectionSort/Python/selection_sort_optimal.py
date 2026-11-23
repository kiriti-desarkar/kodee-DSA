def selection_sort(nums):
    # each pass selects the smallest of the rest and puts it at front_slot
    for front_slot in range(len(nums) - 1):
        smallest_spot = front_slot
        for candidate in range(front_slot + 1, len(nums)):
            if nums[candidate] < nums[smallest_spot]:
                smallest_spot = candidate
        if smallest_spot != front_slot:
            nums[front_slot], nums[smallest_spot] = nums[smallest_spot], nums[front_slot]


# Run it locally: python selection_sort_optimal.py
if __name__ == "__main__":
    nums = [7, 2, 8, 1, 5]
    selection_sort(nums)
    print(nums)
