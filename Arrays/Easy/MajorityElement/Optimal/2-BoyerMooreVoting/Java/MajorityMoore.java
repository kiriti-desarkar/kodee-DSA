public class MajorityMoore {
    public static int majorityElement(int[] shelf) {
        int candidate = 0;
        int votes = 0;
        for (int volume : shelf) {
            if (votes == 0) {
                candidate = volume;
            }
            if (volume == candidate) {
                votes++;
            } else {
                votes--;
            }
        }
        return candidate;
    }

    public static int majorityOrNone(int[] shelf) {
        int size = shelf.length;
        int candidate = majorityElement(shelf);
        // ADDED: the verify pass
        int count = 0;
        for (int volume : shelf) {
            if (volume == candidate) {
                count++;
            }
        }
        if (count > size / 2) {
            return candidate;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] shelf = {3, 7, 7, 5, 7};
        System.out.println("Majority: " + majorityElement(shelf));
    }
}
