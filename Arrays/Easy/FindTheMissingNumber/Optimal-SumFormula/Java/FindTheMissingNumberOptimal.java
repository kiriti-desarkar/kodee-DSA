import java.util.*;

public class FindTheMissingNumberOptimal {
    public int missingNumber(int[] nums) {
        long total = nums.length + 1;
        long expected = total * (total + 1) / 2;
        long actual = 0;
        for (int value : nums) {
            actual += value;
        }
        return (int) (expected - actual);
    }

    public static void main(String[] args) {
        FindTheMissingNumberOptimal solver = new FindTheMissingNumberOptimal();
        int[] nums = new int[]{1, 2, 4, 5};
        int answer = solver.missingNumber(nums);
        System.out.println(answer);
    }
}
