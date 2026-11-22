function rotateByOne(nums) {
    const first = nums[0];
    for (let scan = 1; scan < nums.length; scan++) {
        nums[scan - 1] = nums[scan];
    }
    nums[nums.length - 1] = first;
}

const nums = [1, 2, 3, 4, 5];
rotateByOne(nums);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
