import java.util.*;

class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Arrays.sort(nums);
        return kSum(nums, target, 0, 4);
    }

    private List<List<Integer>> kSum(int[] nums, long target,
            int start, int k) {
        List<List<Integer>> groups = new ArrayList<>();
        // two numbers left: the Two Sum II squeeze
        if (k == 2) {
            int left = start;
            int right = nums.length - 1;
            while (left < right) {
                long sum = (long) nums[left] + nums[right];
                if (sum < target) {
                    left++;
                } else if (sum > target) {
                    right--;
                } else {
                    List<Integer> pair = new ArrayList<>();
                    pair.add(nums[left]);
                    pair.add(nums[right]);
                    groups.add(pair);
                    left++;
                    right--;
                    // skip repeats so the same group is not added twice
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
            return groups;
        }
        for (int pick = start; pick < nums.length - k + 1; pick++) {
            // same rule as second > first + 1: the first pick may equal the number before it
            if (pick > start && nums[pick] == nums[pick - 1]) {
                continue;
            }
            for (List<Integer> rest
                    : kSum(nums, target - nums[pick], pick + 1, k - 1)) {
                rest.add(0, nums[pick]);
                groups.add(rest);
            }
        }
        return groups;
    }
}

// Run it locally: javac FourSumKsum.java && java Main
class Main {
    public static void main(String[] args) {
        System.out.println(new Solution().fourSum(new int[] {1, 0, -1, 0, -2, 2}, 0));
        System.out.println(new Solution().fourSum(new int[] {2, 2, 2, 2, 2}, 8));
        System.out.println(new Solution().fourSum(new int[] {1000000000, 1000000000, 1000000000, 1000000000}, -294967296));
    }
}
