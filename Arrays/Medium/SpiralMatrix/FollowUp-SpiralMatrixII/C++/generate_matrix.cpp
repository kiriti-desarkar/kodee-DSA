#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int size) {
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
    { auto arg0 = 1; cout << show(generateMatrix(arg0)) << endl; }
    { auto arg0 = 3; cout << show(generateMatrix(arg0)) << endl; }
    { auto arg0 = 4; cout << show(generateMatrix(arg0)) << endl; }
    return 0;
}
