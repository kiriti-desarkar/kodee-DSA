import java.util.*;

public class UnionOfTwoSortedArraysOptimal {
    public List<Integer> findUnion(int[] nums1, int[] nums2) {
        List<Integer> result = new ArrayList<>();
        int spotA = 0;
        int spotB = 0;
        while (spotA < nums1.length || spotB < nums2.length) {
            int next;
            if (spotB == nums2.length || (spotA < nums1.length && nums1[spotA] <= nums2[spotB])) {
                next = nums1[spotA];
                spotA++;
            } else {
                next = nums2[spotB];
                spotB++;
            }
            if (result.isEmpty() || result.get(result.size() - 1) != next) {
                result.add(next);
            }
        }
        return result;
    }

    public static void main(String[] args) {
        UnionOfTwoSortedArraysOptimal solver = new UnionOfTwoSortedArraysOptimal();
        int[] nums1 = new int[]{1, 2, 3, 4, 5};
        int[] nums2 = new int[]{1, 2, 3, 6, 7};
        List<Integer> answer = solver.findUnion(nums1, nums2);
        System.out.println(answer);
    }
}
