import java.util.*;

public class SelectionSortOptimal {
    public void selectionSort(int[] nums) {
        int size = nums.length;
        for (int sortedEnd = 0; sortedEnd < size - 1; sortedEnd++) {
            int minSpot = sortedEnd;
            for (int scan = sortedEnd + 1; scan < size; scan++) {
                if (nums[scan] < nums[minSpot]) {
                    minSpot = scan;
                }
            }
            if (minSpot != sortedEnd) {
                int held = nums[sortedEnd];
                nums[sortedEnd] = nums[minSpot];
                nums[minSpot] = held;
            }
        }
    }

    public static void main(String[] args) {
        SelectionSortOptimal solver = new SelectionSortOptimal();
        int[] nums = new int[]{7, 2, 8, 1, 5};
        solver.selectionSort(nums);
        System.out.println(Arrays.toString(nums));
    }
}
