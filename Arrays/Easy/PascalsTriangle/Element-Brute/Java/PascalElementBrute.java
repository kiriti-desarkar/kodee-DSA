import java.util.*;

public class PascalElementBrute {
    // Brute force: n C r with factorials. Correct on paper, but factorials overflow fast.
    // int breaks at 13!, long breaks at 21! (so row 22 already gives a wrong answer).
    static long factorial(int n) {
        long result = 1;
        for (int i = 2; i <= n; i++) {
            result = result * i;
        }
        return result;
    }

    static long pascalElementBrute(int row, int col) {
        long top = factorial(row - 1);
        long bottom = factorial(col - 1) * factorial(row - col);
        return top / bottom;
    }

    static String show(Object o) {
        if (o instanceof int[]) return java.util.Arrays.toString((int[]) o);
        if (o instanceof long[]) return java.util.Arrays.toString((long[]) o);
        if (o instanceof boolean[]) return java.util.Arrays.toString((boolean[]) o);
        if (o instanceof Object[]) return java.util.Arrays.deepToString((Object[]) o);
        return String.valueOf(o);
    }

    public static void main(String[] args) {
        System.out.println(show(pascalElementBrute(5, 3)));
        System.out.println(show(pascalElementBrute(1, 1)));
        System.out.println(show(pascalElementBrute(6, 3)));
        System.out.println(show(pascalElementBrute(21, 11)));
    }
}
