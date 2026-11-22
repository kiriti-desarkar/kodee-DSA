import java.util.*;

public class SetMatrixZeroesBetter {
    public void setZeroes(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        boolean[] rowMark = new boolean[rows];
        boolean[] colMark = new boolean[cols];
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (matrix[row][col] == 0) {
                    rowMark[row] = true;
                    colMark[col] = true;
                }
            }
        }
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (rowMark[row] || colMark[col]) {
                    matrix[row][col] = 0;
                }
            }
        }
    }

    public static void main(String[] args) {
        SetMatrixZeroesBetter solver = new SetMatrixZeroesBetter();
        int[][] matrix = new int[][]{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
        solver.setZeroes(matrix);
        System.out.println(Arrays.deepToString(matrix));
    }
}
