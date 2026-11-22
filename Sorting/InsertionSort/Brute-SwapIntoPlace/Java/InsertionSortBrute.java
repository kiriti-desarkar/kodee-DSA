import java.util.*;

public class InsertionSortBrute {
    public void insertionSort(int[] nums) {
        int size = nums.length;
        for (int next = 1; next < size; next++) {
            int slot = next;
            while (slot > 0 && nums[slot - 1] > nums[slot]) {
                int held = nums[slot];
                nums[slot] = nums[slot - 1];
                nums[slot - 1] = held;
                slot--;
            }
        }
    }

    public static void main(String[] args) {
        InsertionSortBrute solver = new InsertionSortBrute();
        int[] nums = new int[]{7, 2, 8, 1, 5};
        solver.insertionSort(nums);
        System.out.println(Arrays.toString(nums));
    }
}
