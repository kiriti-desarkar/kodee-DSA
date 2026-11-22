import java.util.*;

public class BubbleSortBrute {
    public void bubbleSort(int[] nums) {
        int size = nums.length;
        for (int pass = 0; pass < size - 1; pass++) {
            for (int scan = 0; scan < size - 1; scan++) {
                if (nums[scan] > nums[scan + 1]) {
                    int held = nums[scan];
                    nums[scan] = nums[scan + 1];
                    nums[scan + 1] = held;
                }
            }
        }
    }

    public static void main(String[] args) {
        BubbleSortBrute solver = new BubbleSortBrute();
        int[] nums = new int[]{7, 2, 8, 1, 5};
        solver.bubbleSort(nums);
        System.out.println(Arrays.toString(nums));
    }
}
