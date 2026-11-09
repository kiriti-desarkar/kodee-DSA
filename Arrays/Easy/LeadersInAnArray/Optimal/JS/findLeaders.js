function findLeaders(nums) {
    const size = nums.length;
    const leaders = [];
    let maxRight = nums[size - 1];
    leaders.push(maxRight);
    for (let scan = size - 2; scan >= 0; scan--) {
        if (nums[scan] > maxRight) {
            maxRight = nums[scan];
            leaders.push(maxRight);
        }
    }
    leaders.reverse();
    return leaders;
}

console.log(findLeaders([4, 9, 2, 6, 3]));
