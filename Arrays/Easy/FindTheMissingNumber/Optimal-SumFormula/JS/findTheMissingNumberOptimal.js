function missingNumber(nums) {
    const total = nums.length + 1;
    const expected = total * (total + 1) / 2;
    let actual = 0;
    for (const value of nums) {
        actual += value;
    }
    return expected - actual;
}

const nums = [1, 2, 4, 5];
console.log(missingNumber(nums));
