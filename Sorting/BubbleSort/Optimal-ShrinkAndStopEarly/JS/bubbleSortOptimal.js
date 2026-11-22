function bubbleSort(nums) {
    let end = nums.length - 1;
    while (end > 0) {
        let swapped = false;
        for (let scan = 0; scan < end; scan++) {
            if (nums[scan] > nums[scan + 1]) {
                const held = nums[scan];
                nums[scan] = nums[scan + 1];
                nums[scan + 1] = held;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
        end--;
    }
}

const nums = [7, 2, 8, 1, 5];
bubbleSort(nums);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
