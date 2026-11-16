import java.util.*;

public class GenerateByRowFormula {
    // LeetCode 118, version (b): build every row with the round two formula.
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

    static List<List<Integer>> generateByRowFormula(int numRows) {
        List<List<Integer>> triangle = new ArrayList<>();
        for (int row = 1; row <= numRows; row++) {
            triangle.add(generateRow(row));
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
        System.out.println(show(generateByRowFormula(5)));
        System.out.println(show(generateByRowFormula(1)));
        System.out.println(show(generateByRowFormula(2)));
    }
}
