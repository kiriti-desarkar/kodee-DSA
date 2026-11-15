#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int> result;
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    int rowStep[4] = {0, 1, 0, -1};
    int colStep[4] = {1, 0, -1, 0};
    int row = 0;
    int col = 0;
    int direction = 0;
    for (int step = 0; step < rows * cols; step++) {
        result.push_back(matrix[row][col]);
        visited[row][col] = true;
        int nextRow = row + rowStep[direction];
        int nextCol = col + colStep[direction];
        bool rowOutside = nextRow < 0 || nextRow >= rows;
        bool colOutside = nextCol < 0 || nextCol >= cols;
        if (rowOutside || colOutside || visited[nextRow][nextCol]) {
            direction = (direction + 1) % 4;
            nextRow = row + rowStep[direction];
            nextCol = col + colStep[direction];
        }
        row = nextRow;
        col = nextCol;
    }
    return result;
}

string show(int value) { return to_string(value); }
string show(long long value) { return to_string(value); }
string show(bool value) { return value ? "true" : "false"; }
string show(const string& value) { return "\"" + value + "\""; }
template <typename T> string show(const vector<T>& values) {
    string text = "[";
    for (size_t index = 0; index < values.size(); index++) {
        text += (index ? ", " : "") + show(values[index]);
    }
    return text + "]";
}

int main() {
    { auto arg0 = vector<vector<int>>{{1, 2, 3}, {8, 9, 4}, {7, 6, 5}}; cout << show(spiralOrder(arg0)) << endl; }
    { auto arg0 = vector<vector<int>>{{1, 2, 3, 4}, {10, 11, 12, 5}, {9, 8, 7, 6}}; cout << show(spiralOrder(arg0)) << endl; }
    { auto arg0 = vector<vector<int>>{{1, 2, 3}}; cout << show(spiralOrder(arg0)) << endl; }
    { auto arg0 = vector<vector<int>>{{1}, {2}, {3}}; cout << show(spiralOrder(arg0)) << endl; }
    return 0;
}
