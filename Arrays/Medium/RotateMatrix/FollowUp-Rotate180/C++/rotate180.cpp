#include <bits/stdc++.h>
using namespace std;

void rotate180(vector<vector<int>>& matrix) {
    int size = matrix.size();
    for (int row = 0; row < size; row++) {
        int left = 0;
        int right = size - 1;
        while (left < right) {
            swap(matrix[row][left], matrix[row][right]);
            left++;
            right--;
        }
    }
    int top = 0;
    int bottom = size - 1;
    while (top < bottom) {
        swap(matrix[top], matrix[bottom]);
        top++;
        bottom--;
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
    { auto matrix = vector<vector<int>>{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; rotate180(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}}; rotate180(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1}}; rotate180(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1, 2}, {3, 4}}; rotate180(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}; rotate180(matrix); cout << show(matrix) << endl; }
    return 0;
}
