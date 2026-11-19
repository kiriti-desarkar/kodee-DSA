#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateRect(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> ans(cols, vector<int>(rows));
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            ans[col][rows - 1 - row] = matrix[row][col];
        }
    }
    return ans;
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
    { auto arg0 = vector<vector<int>>{{1, 2, 3}, {4, 5, 6}}; cout << show(rotateRect(arg0)) << endl; }
    { auto arg0 = vector<vector<int>>{{1}, {2}, {3}}; cout << show(rotateRect(arg0)) << endl; }
    { auto arg0 = vector<vector<int>>{{1, 2, 3, 4}}; cout << show(rotateRect(arg0)) << endl; }
    { auto arg0 = vector<vector<int>>{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; cout << show(rotateRect(arg0)) << endl; }
    return 0;
}
