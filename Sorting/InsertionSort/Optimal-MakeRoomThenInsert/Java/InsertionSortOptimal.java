import java.util.*;

public class InsertionSortOptimal {
    public void insertionSort(int[] nums) {
        int size = nums.length;
        for (int next = 1; next < size; next++) {
            int held = nums[next];
            int slot = next;
            while (slot > 0 && nums[slot - 1] > held) {
                nums[slot] = nums[slot - 1];
                slot--;
            }
            nums[slot] = held;
        }
    }

    public static void main(String[] args) {
        InsertionSortOptimal solver = new InsertionSortOptimal();
        int[] nums = new int[]{7, 2, 8, 1, 5};
        solver.insertionSort(nums);
        System.out.println(Arrays.toString(nums));
    }
}
