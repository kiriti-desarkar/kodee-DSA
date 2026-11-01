import java.util.ArrayList;
import java.util.List;

public class IntersectSorted {

    static List<Integer> intersectSorted(int[] shelfA, int[] shelfB) {
        List<Integer> common = new ArrayList<>();
        int sizeA = shelfA.length;
        int sizeB = shelfB.length;
        int spotA = 0;
        int spotB = 0;
        while (spotA < sizeA && spotB < sizeB) {
            if (shelfA[spotA] < shelfB[spotB]) {
                spotA++;
            } else if (shelfA[spotA] > shelfB[spotB]) {
                spotB++;
            } else {
                common.add(shelfA[spotA]);
                spotA++;
                spotB++;
            }
        }
        return common;
    }

    public static void main(String[] args) {
        int[] shelfA = {1, 2, 2, 4};
        int[] shelfB = {2, 4, 4, 5};
        List<Integer> common = intersectSorted(shelfA, shelfB);
        System.out.println("Intersection: " + common);
    }
}
