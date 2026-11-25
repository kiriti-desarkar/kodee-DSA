import java.util.*;

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Set<List<Integer>> found = new HashSet<>();
        for (int first = 0; first < nums.length; first++) {
            // Two Sum on the numbers after first, with target -nums[first]
            Set<Integer> seen = new HashSet<>();
            for (int second = first + 1; second < nums.length; second++) {
                int need = -(nums[first] + nums[second]);
                if (seen.contains(need)) {
                    List<Integer> triplet = Arrays.asList(nums[first], nums[second], need);
                    Collections.sort(triplet);
                    found.add(triplet);
                }
                seen.add(nums[second]);
            }
        }
        return new ArrayList<>(found);
    }
}

// Run it locally: javac ThreeSumBetter.java && java Main
class Main {
    public static void main(String[] args) {
        int[] nums = {-1, 0, 1, 2, -1, -4};
        System.out.println(new Solution().threeSum(nums));
    }
}
