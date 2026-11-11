// WARNING: the swap trick BREAKS ORDER. Signs alternate, but same-sign numbers can change order. Shown only as a counter-example; the order-keeping shift version (rearrangeInPlace) in this folder is the correct in-place answer.
import java.util.Arrays;

public class RearrangeSwapTrickBreaksOrder {
    static void rearrangeSwapTrick(int[] nums) {
        int size = nums.length;
        int evenSeat = 0;
        int oddSeat = 1;
        while (evenSeat < size && oddSeat < size) {
            if (nums[evenSeat] > 0) {
                evenSeat += 2;
            } else if (nums[oddSeat] < 0) {
                oddSeat += 2;
            } else {
                int held = nums[evenSeat];
                nums[evenSeat] = nums[oddSeat];
                nums[oddSeat] = held;
                evenSeat += 2;
                oddSeat += 2;
            }
        }
    }

    public static void main(String[] args) {
        int[] nums1 = new int[]{3, 1, -2, -5, 2, -4};
        rearrangeSwapTrick(nums1);
        System.out.println(Arrays.toString(nums1));
        int[] nums2 = new int[]{1, 2, 3, -4, -5, -6};
        rearrangeSwapTrick(nums2);
        System.out.println(Arrays.toString(nums2));
    }
}
