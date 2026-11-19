#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int size = matrix.size();
    for (int row = 0; row < size; row++) {
        for (int col = row + 1; col < size; col++) {
            swap(matrix[row][col], matrix[col][row]);
        }
    }
    for (int row = 0; row < size; row++) {
        int left = 0;
        int right = size - 1;
        while (left < right) {
            swap(matrix[row][left], matrix[row][right]);
            left++;
            right--;
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
    { auto matrix = vector<vector<int>>{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; rotate(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}}; rotate(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1}}; rotate(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1, 2}, {3, 4}}; rotate(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}; rotate(matrix); cout << show(matrix) << endl; }
    return 0;
}
