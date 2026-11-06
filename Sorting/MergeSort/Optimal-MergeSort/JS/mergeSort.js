function merge(nums, low, mid, high) {
    const temp = new Array(high - low + 1);
    let left = low;
    let right = mid + 1;
    let spot = 0;
    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp[spot] = nums[left];
            left++;
        } else {
            temp[spot] = nums[right];
            right++;
        }
        spot++;
    }
    while (left <= mid) {
        temp[spot] = nums[left];
        left++;
        spot++;
    }
    while (right <= high) {
        temp[spot] = nums[right];
        right++;
        spot++;
    }
    for (spot = 0; spot < temp.length; spot++) {
        nums[low + spot] = temp[spot];
    }
}

function mergeSort(nums, low, high) {
    if (low >= high) {
        return;
    }
    const mid = low + Math.floor((high - low) / 2);
    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);
    merge(nums, low, mid, high);
}

const nums = [5, 2, 8, 1];
mergeSort(nums, 0, nums.length - 1);
console.log(nums); // [ 1, 2, 5, 8 ]
