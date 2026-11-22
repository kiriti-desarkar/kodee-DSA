import java.util.*;

public class FindTheMissingNumberBrute {
    public int missingNumber(int[] nums) {
        int total = nums.length + 1;
        for (int wanted = 1; wanted <= total; wanted++) {
            boolean found = false;
            for (int value : nums) {
                if (value == wanted) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return wanted;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        FindTheMissingNumberBrute solver = new FindTheMissingNumberBrute();
        int[] nums = new int[]{1, 2, 4, 5};
        int answer = solver.missingNumber(nums);
        System.out.println(answer);
    }
}
