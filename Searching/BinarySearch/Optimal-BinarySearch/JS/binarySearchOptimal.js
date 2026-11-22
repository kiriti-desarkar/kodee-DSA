function search(nums, target) {
    let low = 0;
    let high = nums.length - 1;
    while (low <= high) {
        const mid = low + Math.floor((high - low) / 2);
        if (nums[mid] === target) {
            return mid;
        }
        if (target > nums[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

const nums = [2, 5, 8, 12, 16, 23, 38, 56];
const target = 23;
console.log(search(nums, target));
