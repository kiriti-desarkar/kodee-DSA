public class MajorityBrute {
    public static int majorityElement(int[] shelf) {
        int size = shelf.length;
        for (int volume : shelf) {
            int copies = 0;
            for (int book : shelf) {
                if (book == volume) {
                    copies++;
                }
            }
            if (copies > size / 2) {
                return volume;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] shelf = {3, 7, 7, 5, 7};
        System.out.println("Majority: " + majorityElement(shelf));
    }
}
