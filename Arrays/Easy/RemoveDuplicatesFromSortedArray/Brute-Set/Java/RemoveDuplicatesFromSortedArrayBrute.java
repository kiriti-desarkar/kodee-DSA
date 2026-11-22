import java.util.*;

public class RemoveDuplicatesFromSortedArrayBrute {
    public int removeDuplicates(int[] nums) {
        TreeSet<Integer> unique = new TreeSet<>();
        for (int value : nums) {
            unique.add(value);
        }
        int write = 0;
        for (int value : unique) {
            nums[write] = value;
            write++;
        }
        return write;
    }

    public static void main(String[] args) {
        RemoveDuplicatesFromSortedArrayBrute solver = new RemoveDuplicatesFromSortedArrayBrute();
        int[] nums = new int[]{1, 1, 2};
        int count = solver.removeDuplicates(nums);
        System.out.println(count + " " + Arrays.toString(Arrays.copyOf(nums, count)));
    }
}
