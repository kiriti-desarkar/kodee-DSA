function findMaxConsecutiveOnes(nums) {
    let maxCount = 0;
    for (let start = 0; start < nums.length; start++) {
        let count = 0;
        let scan = start;
        while (scan < nums.length && nums[scan] === 1) {
            count++;
            scan++;
        }
        maxCount = Math.max(maxCount, count);
    }
    return maxCount;
}

const nums = [1, 1, 0, 1, 1, 1];
console.log(findMaxConsecutiveOnes(nums));
