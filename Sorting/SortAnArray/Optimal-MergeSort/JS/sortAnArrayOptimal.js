function sortArray(nums) {
    sortRange(nums, 0, nums.length - 1);
    return nums;
}

function sortRange(nums, low, high) {
    if (low >= high) {
        return;
    }
    const mid = low + Math.floor((high - low) / 2);
    sortRange(nums, low, mid);
    sortRange(nums, mid + 1, high);
    merge(nums, low, mid, high);
}

function merge(nums, low, mid, high) {
    const merged = [];
    let leftSpot = low;
    let rightSpot = mid + 1;
    while (leftSpot <= mid && rightSpot <= high) {
        if (nums[leftSpot] <= nums[rightSpot]) {
            merged.push(nums[leftSpot]);
            leftSpot++;
        } else {
            merged.push(nums[rightSpot]);
            rightSpot++;
        }
    }
    while (leftSpot <= mid) {
        merged.push(nums[leftSpot]);
        leftSpot++;
    }
    while (rightSpot <= high) {
        merged.push(nums[rightSpot]);
        rightSpot++;
    }
    for (let copy = 0; copy < merged.length; copy++) {
        nums[low + copy] = merged[copy];
    }
}

const nums = [5, 2, 3, 1];
console.log(JSON.stringify(sortArray(nums)).replace(/,/g, ', '));
