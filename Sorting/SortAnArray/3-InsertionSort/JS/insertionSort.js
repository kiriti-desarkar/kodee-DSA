function sortArray(nums) {
    // everything left of newBookSpot is already sorted
    for (let newBookSpot = 1; newBookSpot < nums.length; newBookSpot++) {
        const newBook = nums[newBookSpot];
        let gap = newBookSpot;
        // shift every bigger book one step right to make room
        while (gap > 0 && nums[gap - 1] > newBook) {
            nums[gap] = nums[gap - 1];
            gap--;
        }
        nums[gap] = newBook;
    }
    return nums;
}

// Run it locally: node insertionSort.js
console.log(sortArray([5, 2, 3, 1]));
