function selectionSort(nums) {
    const size = nums.length;
    for (let sortedEnd = 0; sortedEnd < size - 1; sortedEnd++) {
        let minSpot = sortedEnd;
        for (let scan = sortedEnd + 1; scan < size; scan++) {
            if (nums[scan] < nums[minSpot]) {
                minSpot = scan;
            }
        }
        if (minSpot !== sortedEnd) {
            const held = nums[sortedEnd];
            nums[sortedEnd] = nums[minSpot];
            nums[minSpot] = held;
        }
    }
}

const nums = [7, 2, 8, 1, 5];
selectionSort(nums);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
