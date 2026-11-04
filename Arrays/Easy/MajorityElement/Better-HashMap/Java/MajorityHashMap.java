import java.util.HashMap;

public class MajorityHashMap {
    public static int majorityElement(int[] shelf) {
        int size = shelf.length;
        HashMap<Integer, Integer> copiesOf = new HashMap<>();
        for (int volume : shelf) {
            int copies = copiesOf.getOrDefault(volume, 0) + 1;
            copiesOf.put(volume, copies);
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
