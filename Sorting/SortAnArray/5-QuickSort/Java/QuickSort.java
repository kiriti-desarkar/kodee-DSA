class Solution {
    public int[] sortArray(int[] nums) {
        quickSortHelper(nums, 0, nums.length - 1);
        return nums;
    }

    private void quickSortHelper(int[] nums, int low, int high) {
        // one number is already sorted
        if (low >= high) {
            return;
        }
        int pivotSpot = partition(nums, low, high);
        quickSortHelper(nums, low, pivotSpot - 1);
        quickSortHelper(nums, pivotSpot + 1, high);
    }

    private int partition(int[] nums, int low, int high) {
        int pivot = nums[high];
        // everything left of wall is <= pivot
        int wall = low;
        for (int scan = low; scan < high; scan++) {
            if (nums[scan] <= pivot) {
                swap(nums, wall, scan);
                wall++;
            }
        }
        swap(nums, wall, high);
        return wall;
    }

    private void swap(int[] nums, int left, int right) {
        int held = nums[left];
        nums[left] = nums[right];
        nums[right] = held;
    }
}

// Run it locally: javac QuickSort.java && java Main
class Main {
    public static void main(String[] args) {
        int[] nums = {5, 2, 3, 1};
        System.out.println(java.util.Arrays.toString(new Solution().sortArray(nums)));
    }
}
