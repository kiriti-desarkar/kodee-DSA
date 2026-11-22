function findMaxConsecutiveOnes(nums) {
    let maxCount = 0;
    let current = 0;
    for (const light of nums) {
        if (light === 1) {
            current++;
            if (current > maxCount) {
                maxCount = current;
            }
        } else {
            current = 0;
        }
    }
    return maxCount;
}

const nums = [1, 1, 0, 1, 1, 1];
console.log(findMaxConsecutiveOnes(nums));
