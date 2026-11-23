function selectionSort(nums) {
    // each pass selects the smallest of the rest and puts it at frontSlot
    for (let frontSlot = 0; frontSlot < nums.length - 1; frontSlot++) {
        let smallestSpot = frontSlot;
        for (let candidate = frontSlot + 1; candidate < nums.length; candidate++) {
            if (nums[candidate] < nums[smallestSpot]) {
                smallestSpot = candidate;
            }
        }
        if (smallestSpot !== frontSlot) {
            [nums[frontSlot], nums[smallestSpot]] = [nums[smallestSpot], nums[frontSlot]];
        }
    }
}

// Run it locally: node selectionSortOptimal.js
const nums = [7, 2, 8, 1, 5];
selectionSort(nums);
console.log(nums);
