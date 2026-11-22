import java.util.*;

public class SetMatrixZeroesOptimal {
    public void setZeroes(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        boolean rowZero = false;
        boolean colZero = false;
        for (int col = 0; col < cols; col++) {
            if (matrix[0][col] == 0) {
                rowZero = true;
            }
        }
        for (int row = 0; row < rows; row++) {
            if (matrix[row][0] == 0) {
                colZero = true;
            }
        }
        for (int row = 1; row < rows; row++) {
            for (int col = 1; col < cols; col++) {
                if (matrix[row][col] == 0) {
                    matrix[row][0] = 0;
                    matrix[0][col] = 0;
                }
            }
        }
        for (int row = 1; row < rows; row++) {
            for (int col = 1; col < cols; col++) {
                if (matrix[row][0] == 0 || matrix[0][col] == 0) {
                    matrix[row][col] = 0;
                }
            }
        }
        if (rowZero) {
            for (int col = 0; col < cols; col++) {
                matrix[0][col] = 0;
            }
        }
        if (colZero) {
            for (int row = 0; row < rows; row++) {
                matrix[row][0] = 0;
            }
        }
    }

    public static void main(String[] args) {
        SetMatrixZeroesOptimal solver = new SetMatrixZeroesOptimal();
        int[][] matrix = new int[][]{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
        solver.setZeroes(matrix);
        System.out.println(Arrays.deepToString(matrix));
    }
}
