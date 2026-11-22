import java.util.*;

public class UnionOfTwoSortedArraysBrute {
    public List<Integer> findUnion(int[] nums1, int[] nums2) {
        TreeSet<Integer> seen = new TreeSet<>();
        for (int value : nums1) {
            seen.add(value);
        }
        for (int value : nums2) {
            seen.add(value);
        }
        return new ArrayList<>(seen);
    }

    public static void main(String[] args) {
        UnionOfTwoSortedArraysBrute solver = new UnionOfTwoSortedArraysBrute();
        int[] nums1 = new int[]{1, 2, 3, 4, 5};
        int[] nums2 = new int[]{1, 2, 3, 6, 7};
        List<Integer> answer = solver.findUnion(nums1, nums2);
        System.out.println(answer);
    }
}
