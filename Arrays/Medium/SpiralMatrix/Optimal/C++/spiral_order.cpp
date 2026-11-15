#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;
    while (top <= bottom && left <= right) {
        for (int col = left; col <= right; col++) {
            result.push_back(matrix[top][col]);
        }
        top++;
        for (int row = top; row <= bottom; row++) {
            result.push_back(matrix[row][right]);
        }
        right--;
        if (top <= bottom) {
            for (int col = right; col >= left; col--) {
                result.push_back(matrix[bottom][col]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int row = bottom; row >= top; row--) {
                result.push_back(matrix[row][left]);
            }
            left++;
        }
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
