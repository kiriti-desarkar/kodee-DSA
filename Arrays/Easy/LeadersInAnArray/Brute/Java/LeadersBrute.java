import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class LeadersBrute {
    static List<Integer> leadersBrute(int[] nums) {
        int size = nums.length;
        List<Integer> leaders = new ArrayList<>();
        for (int scan = 0; scan < size; scan++) {
            boolean isLeader = true;
            for (int right = scan + 1; right < size; right++) {
                if (nums[right] >= nums[scan]) {
                    isLeader = false;
                    break;
                }
            }
            if (isLeader) {
                leaders.add(nums[scan]);
            }
        }
        return leaders;
    }

    public static void main(String[] args) {
        System.out.println(leadersBrute(new int[]{4, 9, 2, 6, 3}));
        System.out.println(leadersBrute(new int[]{10, 2, 8, 3, 1}));
    }
}
