function insertionSort(nums) {
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
}

// Run it locally: node insertionSortOptimal.js
const nums = [7, 2, 8, 1, 5];
insertionSort(nums);
console.log(nums);
