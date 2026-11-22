function missingNumber(nums) {
    const total = nums.length + 1;
    for (let wanted = 1; wanted <= total; wanted++) {
        let found = false;
        for (const value of nums) {
            if (value === wanted) {
                found = true;
                break;
            }
        }
        if (!found) {
            return wanted;
        }
    }
    return -1;
}

const nums = [1, 2, 4, 5];
console.log(missingNumber(nums));
