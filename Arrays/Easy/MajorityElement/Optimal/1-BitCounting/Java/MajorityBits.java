public class MajorityBits {
    public static int majorityElement(int[] shelf) {
        int size = shelf.length;
        int answer = 0;
        for (int bit = 0; bit < 32; bit++) {
            int ones = 0;
            for (int volume : shelf) {
                if (((volume >> bit) & 1) == 1) {
                    ones++;
                }
            }
            if (ones > size / 2) {
                answer = answer | (1 << bit);
            }
        }
        return answer;
    }

    public static void main(String[] args) {
        int[] shelf = {3, 7, 7, 5, 7};
        System.out.println("Majority: " + majorityElement(shelf));
    }
}
