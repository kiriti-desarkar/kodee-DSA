function sortArray(nums) {
    mergeSortHelper(nums, 0, nums.length - 1);
    return nums;
}

function mergeSortHelper(nums, low, high) {
    // one number is already sorted
    if (low >= high) {
        return;
    }
    const mid = Math.floor((low + high) / 2);
    mergeSortHelper(nums, low, mid);
    mergeSortHelper(nums, mid + 1, high);
    merge(nums, low, mid, high);
}

function merge(nums, low, mid, high) {
    const merged = [];
    let leftSpot = low;
    let rightSpot = mid + 1;
    // always take the smaller front number of the two sorted halves
    while (leftSpot <= mid && rightSpot <= high) {
        if (nums[leftSpot] <= nums[rightSpot]) {
            merged.push(nums[leftSpot++]);
        } else {
            merged.push(nums[rightSpot++]);
        }
    }
    while (leftSpot <= mid) {
        merged.push(nums[leftSpot++]);
    }
    while (rightSpot <= high) {
        merged.push(nums[rightSpot++]);
    }
    for (let offset = 0; offset < merged.length; offset++) {
        nums[low + offset] = merged[offset];
    }
}

// Run it locally: node mergeSort.js
console.log(sortArray([5, 2, 3, 1]));
