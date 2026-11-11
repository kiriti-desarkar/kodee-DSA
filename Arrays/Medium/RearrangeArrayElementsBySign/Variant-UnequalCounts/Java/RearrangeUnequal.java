import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class RearrangeUnequal {
    static List<Integer> rearrangeUnequal(int[] nums) {
        List<Integer> positives = new ArrayList<>();
        List<Integer> negatives = new ArrayList<>();
        for (int scan = 0; scan < nums.length; scan++) {
            if (nums[scan] >= 0) {
                positives.add(nums[scan]);
            } else {
                negatives.add(nums[scan]);
            }
        }
        List<Integer> result = new ArrayList<>();
        int pair = 0;
        while (pair < positives.size() && pair < negatives.size()) {
            result.add(positives.get(pair));
            result.add(negatives.get(pair));
            pair++;
        }
        while (pair < positives.size()) {
            result.add(positives.get(pair));
            pair++;
        }
        while (pair < negatives.size()) {
            result.add(negatives.get(pair));
            pair++;
        }
        return result;
    }

    public static void main(String[] args) {
        System.out.println(rearrangeUnequal(new int[]{9, 4, -2, -1, 5, 0, -5, -3, 2}));
        System.out.println(rearrangeUnequal(new int[]{-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}));
        System.out.println(rearrangeUnequal(new int[]{3, -1, 5, 7}));
        System.out.println(rearrangeUnequal(new int[]{-4, -2}));
    }
}
