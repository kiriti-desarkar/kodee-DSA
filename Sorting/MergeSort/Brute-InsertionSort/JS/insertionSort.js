function insertionSort(nums) {
    for (let pick = 1; pick < nums.length; pick++) {
        let value = nums[pick];
        let scan = pick - 1;
        while (scan >= 0 && nums[scan] > value) {
            nums[scan + 1] = nums[scan];
            scan--;
        }
        nums[scan + 1] = value;
    }
}

const nums = [5, 2, 8, 1];
insertionSort(nums);
console.log(nums); // [ 1, 2, 5, 8 ]
