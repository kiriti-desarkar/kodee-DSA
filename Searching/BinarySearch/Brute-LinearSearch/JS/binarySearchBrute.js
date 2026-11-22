function search(nums, target) {
    for (let scan = 0; scan < nums.length; scan++) {
        if (nums[scan] === target) {
            return scan;
        }
    }
    return -1;
}

const nums = [2, 5, 8, 12, 16, 23, 38, 56];
const target = 23;
console.log(search(nums, target));
