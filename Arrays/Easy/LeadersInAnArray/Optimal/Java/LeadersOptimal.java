import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class LeadersOptimal {
    static List<Integer> findLeaders(int[] nums) {
        int size = nums.length;
        List<Integer> leaders = new ArrayList<>();
        int maxRight = nums[size - 1];
        leaders.add(maxRight);
        for (int scan = size - 2; scan >= 0; scan--) {
            if (nums[scan] > maxRight) {
                maxRight = nums[scan];
                leaders.add(maxRight);
            }
        }
        Collections.reverse(leaders);
        return leaders;
    }

    public static void main(String[] args) {
        System.out.println(findLeaders(new int[]{4, 9, 2, 6, 3}));
        System.out.println(findLeaders(new int[]{10, 2, 8, 3, 1}));
    }
}
