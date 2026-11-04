import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class IntersectOnDisk {

    static List<Integer> intersectOnDisk(int[] smallShelf, List<int[]> bigShelfChunks) {
        HashMap<Integer, Integer> counts = new HashMap<>();
        for (int book : smallShelf) {
            int count = counts.getOrDefault(book, 0);
            counts.put(book, count + 1);
        }
        List<Integer> common = new ArrayList<>();
        for (int[] chunk : bigShelfChunks) {
            for (int book : chunk) {
                int left = counts.getOrDefault(book, 0);
                if (left > 0) {
                    common.add(book);
                    counts.put(book, left - 1);
                }
            }
        }
        return common;
    }

    public static void main(String[] args) {
        int[] smallShelf = {4, 2, 1, 2};
        List<int[]> bigShelfChunks = new ArrayList<>();
        bigShelfChunks.add(new int[] {5, 2});
        bigShelfChunks.add(new int[] {4, 4});
        List<Integer> common = intersectOnDisk(smallShelf, bigShelfChunks);
        System.out.println("Intersection: " + common);
    }
}
