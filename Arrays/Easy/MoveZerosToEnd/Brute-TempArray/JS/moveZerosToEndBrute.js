function moveZeroes(nums) {
    const nonZeros = nums.filter((value) => value !== 0);
    for (let spot = 0; spot < nums.length; spot++) {
        nums[spot] = spot < nonZeros.length ? nonZeros[spot] : 0;
    }
}

const nums = [0, 1, 0, 3, 12];
moveZeroes(nums);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
