import java.util.Arrays;

public class RearrangeInPlace {
    static void rearrangeInPlace(int[] nums) {
        int size = nums.length;
        for (int seat = 0; seat < size; seat++) {
            boolean needsPositive = seat % 2 == 0;
            boolean isPositive = nums[seat] > 0;
            if (needsPositive == isPositive) {
                continue;
            }
            int matchIndex = seat + 1;
            while ((nums[matchIndex] > 0) != needsPositive) {
                matchIndex++;
            }
            int movedValue = nums[matchIndex];
            for (int shiftIndex = matchIndex; shiftIndex > seat; shiftIndex--) {
                nums[shiftIndex] = nums[shiftIndex - 1];
            }
            nums[seat] = movedValue;
        }
    }

    public static void main(String[] args) {
        int[] nums1 = new int[]{3, 1, -2, -5, 2, -4};
        rearrangeInPlace(nums1);
        System.out.println(Arrays.toString(nums1));
        int[] nums2 = new int[]{-1, 2, -3, 4};
        rearrangeInPlace(nums2);
        System.out.println(Arrays.toString(nums2));
        int[] nums3 = new int[]{1, 2, 3, -4, -5, -6};
        rearrangeInPlace(nums3);
        System.out.println(Arrays.toString(nums3));
    }
}
