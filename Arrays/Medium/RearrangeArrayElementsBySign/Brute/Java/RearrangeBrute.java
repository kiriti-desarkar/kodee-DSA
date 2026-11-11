import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class RearrangeBrute {
    static int[] rearrangeBrute(int[] nums) {
        int size = nums.length;
        List<Integer> positives = new ArrayList<>();
        List<Integer> negatives = new ArrayList<>();
        for (int scan = 0; scan < size; scan++) {
            if (nums[scan] > 0) {
                positives.add(nums[scan]);
            } else {
                negatives.add(nums[scan]);
            }
        }
        int[] result = new int[size];
        for (int pair = 0; pair < size / 2; pair++) {
            result[2 * pair] = positives.get(pair);
            result[2 * pair + 1] = negatives.get(pair);
        }
        return result;
    }

    public static void main(String[] args) {
        System.out.println(Arrays.toString(rearrangeBrute(new int[]{3, 1, -2, -5, 2, -4})));
        System.out.println(Arrays.toString(rearrangeBrute(new int[]{-1, 2, -3, 4})));
        System.out.println(Arrays.toString(rearrangeBrute(new int[]{1, 2, 3, -4, -5, -6})));
    }
}
