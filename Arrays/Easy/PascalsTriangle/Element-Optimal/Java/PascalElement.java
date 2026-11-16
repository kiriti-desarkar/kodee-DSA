import java.util.*;

public class PascalElement {
    static long pascalElement(int row, int col) {
        long ans = 1;
        for (int step = 1; step < col; step++) {
            ans = ans * (row - step) / step;
        }
        return ans;
    }

    static String show(Object o) {
        if (o instanceof int[]) return java.util.Arrays.toString((int[]) o);
        if (o instanceof long[]) return java.util.Arrays.toString((long[]) o);
        if (o instanceof boolean[]) return java.util.Arrays.toString((boolean[]) o);
        if (o instanceof Object[]) return java.util.Arrays.deepToString((Object[]) o);
        return String.valueOf(o);
    }

    public static void main(String[] args) {
        System.out.println(show(pascalElement(5, 3)));
        System.out.println(show(pascalElement(1, 1)));
        System.out.println(show(pascalElement(6, 3)));
        System.out.println(show(pascalElement(30, 15)));
        System.out.println(show(pascalElement(31, 16)));
    }
}
