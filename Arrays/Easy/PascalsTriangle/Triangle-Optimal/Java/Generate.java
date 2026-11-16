import java.util.*;

public class Generate {
    static List<List<Integer>> generate(int numRows) {
        List<List<Integer>> triangle = new ArrayList<>();
        for (int row = 0; row < numRows; row++) {
            List<Integer> rowList = new ArrayList<>();
            for (int col = 0; col <= row; col++) {
                if (col == 0 || col == row) {
                    rowList.add(1);
                } else {
                    List<Integer> prev = triangle.get(row - 1);
                    rowList.add(prev.get(col - 1) + prev.get(col));
                }
            }
            triangle.add(rowList);
        }
        return triangle;
    }

    static String show(Object o) {
        if (o instanceof int[]) return java.util.Arrays.toString((int[]) o);
        if (o instanceof long[]) return java.util.Arrays.toString((long[]) o);
        if (o instanceof boolean[]) return java.util.Arrays.toString((boolean[]) o);
        if (o instanceof Object[]) return java.util.Arrays.deepToString((Object[]) o);
        return String.valueOf(o);
    }

    public static void main(String[] args) {
        System.out.println(show(generate(5)));
        System.out.println(show(generate(1)));
        System.out.println(show(generate(2)));
    }
}
