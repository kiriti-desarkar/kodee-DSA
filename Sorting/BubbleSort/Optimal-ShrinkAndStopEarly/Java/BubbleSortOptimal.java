import java.util.*;

public class BubbleSortOptimal {
    public void bubbleSort(int[] nums) {
        int end = nums.length - 1;
        while (end > 0) {
            boolean swapped = false;
            for (int scan = 0; scan < end; scan++) {
                if (nums[scan] > nums[scan + 1]) {
                    int held = nums[scan];
                    nums[scan] = nums[scan + 1];
                    nums[scan + 1] = held;
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
            end--;
        }
    }

    public static void main(String[] args) {
        BubbleSortOptimal solver = new BubbleSortOptimal();
        int[] nums = new int[]{7, 2, 8, 1, 5};
        solver.bubbleSort(nums);
        System.out.println(Arrays.toString(nums));
    }
}
