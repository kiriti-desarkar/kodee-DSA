#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateSpiral(int size) {
    vector<vector<int>> matrix(size, vector<int>(size, 0));
    int top = 0;
    int bottom = size - 1;
    int left = 0;
    int right = size - 1;
    int value = 1;
    while (top <= bottom && left <= right) {
        for (int col = left; col <= right; col++) {
            matrix[top][col] = value;
            value++;
        }
        top++;
        for (int row = top; row <= bottom; row++) {
            matrix[row][right] = value;
            value++;
        }
        right--;
        if (top <= bottom) {
            for (int col = right; col >= left; col--) {
                matrix[bottom][col] = value;
                value++;
            }
            bottom--;
        }
        if (left <= right) {
            for (int row = bottom; row >= top; row--) {
                matrix[row][left] = value;
                value++;
            }
            left++;
        }
    }
    return matrix;
}

void printGrid(const vector<vector<int>>& grid) {
    for (const auto& row : grid) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    printGrid(generateSpiral(1));
    printGrid(generateSpiral(3));
    printGrid(generateSpiral(4));
    return 0;
}
