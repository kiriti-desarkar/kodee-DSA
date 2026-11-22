import java.util.*;

public class QuickSortOptimal {
    public void quickSort(int[] nums) {
        sortRange(nums, 0, nums.length - 1);
    }

    void sortRange(int[] nums, int low, int high) {
        if (low >= high) {
            return;
        }
        int pivotSpot = partition(nums, low, high);
        sortRange(nums, low, pivotSpot - 1);
        sortRange(nums, pivotSpot + 1, high);
    }

    int partition(int[] nums, int low, int high) {
        int pivot = nums[high];
        int wall = low;
        for (int scan = low; scan < high; scan++) {
            if (nums[scan] <= pivot) {
                int held = nums[wall];
                nums[wall] = nums[scan];
                nums[scan] = held;
                wall++;
            }
        }
        int held = nums[wall];
        nums[wall] = nums[high];
        nums[high] = held;
        return wall;
    }

    public static void main(String[] args) {
        QuickSortOptimal solver = new QuickSortOptimal();
        int[] nums = new int[]{7, 2, 8, 1, 5};
        solver.quickSort(nums);
        System.out.println(Arrays.toString(nums));
    }
}
