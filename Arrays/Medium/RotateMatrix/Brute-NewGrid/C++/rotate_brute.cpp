#include <bits/stdc++.h>
using namespace std;

void rotateBrute(vector<vector<int>>& matrix) {
    int size = matrix.size();
    vector<vector<int>> ans(size, vector<int>(size));
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            ans[col][size - 1 - row] = matrix[row][col];
        }
    }
    for (int row = 0; row < size; row++) {
        matrix[row] = ans[row];
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
    { auto matrix = vector<vector<int>>{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; rotateBrute(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}}; rotateBrute(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1}}; rotateBrute(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1, 2}, {3, 4}}; rotateBrute(matrix); cout << show(matrix) << endl; }
    return 0;
}
