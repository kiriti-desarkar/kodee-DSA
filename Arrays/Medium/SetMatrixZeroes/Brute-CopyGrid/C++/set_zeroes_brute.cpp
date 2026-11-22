#include <bits/stdc++.h>
using namespace std;

void setZeroesBrute(vector<vector<int>>& matrix) {
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
    { auto matrix = vector<vector<int>>{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}}; setZeroesBrute(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}}; setZeroesBrute(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1, 2, 3, 4}, {5, 0, 7, 8}, {9, 10, 11, 12}, {13, 14, 0, 16}}; setZeroesBrute(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1}}; setZeroesBrute(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{0}}; setZeroesBrute(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{-1, 2}, {3, 0}}; setZeroesBrute(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1, 2, 3, 4}, {5, 0, 7, 8}, {0, 10, 11, 12}, {13, 14, 15, 0}}; setZeroesBrute(matrix); cout << show(matrix) << endl; }
    return 0;
}
