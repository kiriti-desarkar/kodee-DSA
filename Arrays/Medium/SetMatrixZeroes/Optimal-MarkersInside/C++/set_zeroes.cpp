#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    bool rowZero = false;
    bool colZero = false;
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
    { auto matrix = vector<vector<int>>{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}}; setZeroes(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}}; setZeroes(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1, 2, 3, 4}, {5, 0, 7, 8}, {9, 10, 11, 12}, {13, 14, 0, 16}}; setZeroes(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1}}; setZeroes(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{0}}; setZeroes(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{-1, 2}, {3, 0}}; setZeroes(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1, 2, 3, 4}, {5, 0, 7, 8}, {0, 10, 11, 12}, {13, 14, 15, 0}}; setZeroes(matrix); cout << show(matrix) << endl; }
    return 0;
}
