import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class IntersectCounts {

    static List<Integer> intersectCounts(int[] shelfA, int[] shelfB) {
        int[] smallShelf;
        int[] bigShelf;
        if (shelfA.length <= shelfB.length) {
            smallShelf = shelfA;
            bigShelf = shelfB;
        } else {
            smallShelf = shelfB;
            bigShelf = shelfA;
        }
        HashMap<Integer, Integer> counts = new HashMap<>();
        for (int book : smallShelf) {
            int count = counts.getOrDefault(book, 0);
            counts.put(book, count + 1);
        }
        List<Integer> common = new ArrayList<>();
        for (int book : bigShelf) {
            int left = counts.getOrDefault(book, 0);
            if (left > 0) {
                common.add(book);
                counts.put(book, left - 1);
            }
        }
        return common;
    }

    static List<Integer> intersectSmallValues(int[] shelfA, int[] shelfB) {
        int[] counts = new int[1001];
        for (int book : shelfA) {
            counts[book]++;
        }
        List<Integer> common = new ArrayList<>();
        for (int book : shelfB) {
            int left = counts[book];
            if (left > 0) {
                common.add(book);
                counts[book] = left - 1;
            }
        }
        return common;
    }

    public static void main(String[] args) {
        int[] shelfA = {1, 2, 2, 4};
        int[] shelfB = {2, 4, 4, 5};
        List<Integer> common = intersectCounts(shelfA, shelfB);
        System.out.println("Intersection: " + common);
        List<Integer> commonSmall = intersectSmallValues(shelfA, shelfB);
        System.out.println("Intersection: " + commonSmall);
    }
}
