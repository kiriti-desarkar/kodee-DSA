import java.util.*;

public class FindTheMissingNumberBetter {
    public int missingNumber(int[] nums) {
        int total = nums.length + 1;
        boolean[] seen = new boolean[total + 1];
        for (int value : nums) {
            seen[value] = true;
        }
        for (int wanted = 1; wanted <= total; wanted++) {
            if (!seen[wanted]) {
                return wanted;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        FindTheMissingNumberBetter solver = new FindTheMissingNumberBetter();
        int[] nums = new int[]{1, 2, 4, 5};
        int answer = solver.missingNumber(nums);
        System.out.println(answer);
    }
}
