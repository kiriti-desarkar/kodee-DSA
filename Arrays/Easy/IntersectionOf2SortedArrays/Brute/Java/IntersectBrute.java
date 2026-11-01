import java.util.ArrayList;
import java.util.List;

public class IntersectBrute {

    static List<Integer> intersectBrute(int[] shelfA, int[] shelfB) {
        int sizeA = shelfA.length;
        int sizeB = shelfB.length;
        boolean[] taken = new boolean[sizeB];
        List<Integer> common = new ArrayList<>();
        for (int book : shelfA) {
            for (int spotB = 0; spotB < sizeB; spotB++) {
                if (!taken[spotB] && shelfB[spotB] == book) {
                    taken[spotB] = true;
                    common.add(book);
                    break;
                }
            }
        }
        return common;
    }

    public static void main(String[] args) {
        int[] shelfA = {1, 2, 2, 4};
        int[] shelfB = {2, 4, 4, 5};
        List<Integer> common = intersectBrute(shelfA, shelfB);
        System.out.println("Intersection: " + common);
    }
}
