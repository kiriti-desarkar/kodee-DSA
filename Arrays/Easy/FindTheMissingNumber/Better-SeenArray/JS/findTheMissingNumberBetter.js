function missingNumber(nums) {
    const total = nums.length + 1;
    const seen = new Array(total + 1).fill(false);
    for (const value of nums) {
        seen[value] = true;
    }
    for (let wanted = 1; wanted <= total; wanted++) {
        if (!seen[wanted]) {
            return wanted;
        }
    }
    return -1;
}

const nums = [1, 2, 4, 5];
console.log(missingNumber(nums));
