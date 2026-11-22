import java.util.*;

public class RemoveDuplicatesFromSortedArrayOptimal {
    public int removeDuplicates(int[] nums) {
        int write = 1;
        for (int read = 1; read < nums.length; read++) {
            if (nums[read] != nums[write - 1]) {
                nums[write] = nums[read];
                write++;
            }
        }
        return write;
    }

    public static void main(String[] args) {
        RemoveDuplicatesFromSortedArrayOptimal solver = new RemoveDuplicatesFromSortedArrayOptimal();
        int[] nums = new int[]{1, 1, 2};
        int count = solver.removeDuplicates(nums);
        System.out.println(count + " " + Arrays.toString(Arrays.copyOf(nums, count)));
    }
}
