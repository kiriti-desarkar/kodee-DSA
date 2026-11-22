import java.util.*;

public class SortAnArrayBetter {
    public int[] sortArray(int[] nums) {
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
        return nums;
    }

    public static void main(String[] args) {
        SortAnArrayBetter solver = new SortAnArrayBetter();
        int[] nums = new int[]{5, 2, 3, 1};
        int[] answer = solver.sortArray(nums);
        System.out.println(Arrays.toString(answer));
    }
}
