class Solution {
    public int[] sortArray(int[] nums) {
        mergeSortHelper(nums, 0, nums.length - 1);
        return nums;
    }

    private void mergeSortHelper(int[] nums, int low, int high) {
        // one number is already sorted
        if (low >= high) {
            return;
        }
        int mid = low + (high - low) / 2;
        mergeSortHelper(nums, low, mid);
        mergeSortHelper(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }

    private void merge(int[] nums, int low, int mid, int high) {
        int[] merged = new int[high - low + 1];
        int leftSpot = low;
        int rightSpot = mid + 1;
        int mergedSpot = 0;
        // always take the smaller front number of the two sorted halves
        while (leftSpot <= mid && rightSpot <= high) {
            if (nums[leftSpot] <= nums[rightSpot]) {
                merged[mergedSpot++] = nums[leftSpot++];
            } else {
                merged[mergedSpot++] = nums[rightSpot++];
            }
        }
        while (leftSpot <= mid) {
            merged[mergedSpot++] = nums[leftSpot++];
        }
        while (rightSpot <= high) {
            merged[mergedSpot++] = nums[rightSpot++];
        }
        System.arraycopy(merged, 0, nums, low, merged.length);
    }
}

// Run it locally: javac MergeSort.java && java Main
class Main {
    public static void main(String[] args) {
        int[] nums = {5, 2, 3, 1};
        System.out.println(java.util.Arrays.toString(new Solution().sortArray(nums)));
    }
}
