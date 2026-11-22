function bubbleSort(nums) {
    const size = nums.length;
    for (let pass = 0; pass < size - 1; pass++) {
        for (let scan = 0; scan < size - 1; scan++) {
            if (nums[scan] > nums[scan + 1]) {
                const held = nums[scan];
                nums[scan] = nums[scan + 1];
                nums[scan + 1] = held;
            }
        }
    }
}

const nums = [7, 2, 8, 1, 5];
bubbleSort(nums);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
