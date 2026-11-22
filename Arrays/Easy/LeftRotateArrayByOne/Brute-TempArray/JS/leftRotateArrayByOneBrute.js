function rotateByOne(nums) {
    const size = nums.length;
    const moved = new Array(size);
    for (let scan = 1; scan < size; scan++) {
        moved[scan - 1] = nums[scan];
    }
    moved[size - 1] = nums[0];
    for (let scan = 0; scan < size; scan++) {
        nums[scan] = moved[scan];
    }
}

const nums = [1, 2, 3, 4, 5];
rotateByOne(nums);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
