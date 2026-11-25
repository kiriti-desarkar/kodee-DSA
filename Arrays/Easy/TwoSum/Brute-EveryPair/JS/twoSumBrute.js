function twoSumBrute(nums, target) {
    for (let first = 0; first < nums.length; first++) {
        for (let second = first + 1; second < nums.length; second++) {
            if (nums[first] + nums[second] === target) {
                return [first, second];
            }
        }
    }
    return [];
}

console.log(JSON.stringify(twoSumBrute([2, 7, 11, 15], 9)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSumBrute([3, 2, 4], 6)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSumBrute([3, 3], 6)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSumBrute([11, 15, 2, 7], 9)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSumBrute([11, 4, 15, 9, 2, 13, 7, 6], 9)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSumBrute([-3, 4, 3, 90], 0)).replace(/,/g, ', '));
