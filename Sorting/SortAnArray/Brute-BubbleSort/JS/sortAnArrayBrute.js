function sortArray(nums) {
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
    return nums;
}

const nums = [5, 2, 3, 1];
console.log(JSON.stringify(sortArray(nums)).replace(/,/g, ', '));
