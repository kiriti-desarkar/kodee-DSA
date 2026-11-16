import java.util.*;

public class GenerateRow {
    static List<Integer> generateRow(int row) {
        List<Integer> rowList = new ArrayList<>();
        rowList.add(1);
        long ans = 1;
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col) / col;
            rowList.add((int) ans);
        }
        return rowList;
    }

    static String show(Object o) {
        if (o instanceof int[]) return java.util.Arrays.toString((int[]) o);
        if (o instanceof long[]) return java.util.Arrays.toString((long[]) o);
        if (o instanceof boolean[]) return java.util.Arrays.toString((boolean[]) o);
        if (o instanceof Object[]) return java.util.Arrays.deepToString((Object[]) o);
        return String.valueOf(o);
    }

    public static void main(String[] args) {
        System.out.println(show(generateRow(5)));
        System.out.println(show(generateRow(1)));
        System.out.println(show(generateRow(2)));
        System.out.println(show(generateRow(7)));
    }
}
