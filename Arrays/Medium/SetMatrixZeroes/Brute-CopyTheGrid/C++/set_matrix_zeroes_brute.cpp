#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> copy = matrix;
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (copy[row][col] == 0) {
                    for (int across = 0; across < cols; across++) {
                        matrix[row][across] = 0;
                    }
                    for (int down = 0; down < rows; down++) {
                        matrix[down][col] = 0;
                    }
                }
            }
        }
    }
};

void print(const vector<int>& values) {
    cout << "[";
    for (size_t spot = 0; spot < values.size(); spot++) {
        if (spot > 0) {
            cout << ", ";
        }
        cout << values[spot];
    }
    cout << "]" << endl;
}

void print(const vector<vector<int>>& grid) {
    for (const vector<int>& line : grid) {
        print(line);
    }
}

int main() {
    Solution solver;
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    solver.setZeroes(matrix);
    print(matrix);
    return 0;
}
