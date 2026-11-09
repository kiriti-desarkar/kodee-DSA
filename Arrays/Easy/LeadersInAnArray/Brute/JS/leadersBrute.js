function leadersBrute(nums) {
    const size = nums.length;
    const leaders = [];
    for (let scan = 0; scan < size; scan++) {
        let isLeader = true;
        for (let right = scan + 1; right < size; right++) {
            if (nums[right] >= nums[scan]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            leaders.push(nums[scan]);
        }
    }
    return leaders;
}

console.log(leadersBrute([4, 9, 2, 6, 3]));
