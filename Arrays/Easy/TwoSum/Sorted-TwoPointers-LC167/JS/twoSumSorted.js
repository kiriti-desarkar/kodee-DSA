function twoSumSorted(nums, target) {
    let left = 0;
    let right = nums.length - 1;
    while (left < right) {
        const sum = nums[left] + nums[right];
        if (sum === target) {
            return [left + 1, right + 1];
        }
        if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return [];
}

console.log(JSON.stringify(twoSumSorted([2, 7, 11, 15], 9)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSumSorted([2, 3, 4], 6)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSumSorted([-1, 0], -1)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSumSorted([2, 3, 6, 9], 9)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSumSorted([1, 2, 4, 5, 10, 13, 14, 16], 9)).replace(/,/g, ', '));
