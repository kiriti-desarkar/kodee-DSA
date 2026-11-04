import java.util.ArrayList;
import java.util.List;

public class IntersectBinary {

    static int lowerBound(int[] shelf, int value, int fromSpot) {
        int low = fromSpot;
        int high = shelf.length;
        while (low < high) {
            int middle = low + (high - low) / 2;
            if (shelf[middle] < value) {
                low = middle + 1;
            } else {
                high = middle;
            }
        }
        return low;
    }

    static List<Integer> intersectBinary(int[] shelfA, int[] shelfB) {
        List<Integer> common = new ArrayList<>();
        int sizeB = shelfB.length;
        int fromSpot = 0;
        for (int book : shelfA) {
            int found = lowerBound(shelfB, book, fromSpot);
            if (found < sizeB && shelfB[found] == book) {
                common.add(book);
                fromSpot = found + 1;
            }
        }
        return common;
    }

    public static void main(String[] args) {
        int[] shelfA = {1, 2, 2, 4};
        int[] shelfB = {2, 4, 4, 5};
        List<Integer> common = intersectBinary(shelfA, shelfB);
        System.out.println("Intersection: " + common);
    }
}
