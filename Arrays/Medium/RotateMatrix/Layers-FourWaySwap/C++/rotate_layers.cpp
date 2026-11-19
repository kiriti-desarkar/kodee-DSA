#include <bits/stdc++.h>
using namespace std;

void rotateLayers(vector<vector<int>>& matrix) {
    int size = matrix.size();
    for (int layer = 0; layer < size / 2; layer++) {
        int first = layer;
        int last = size - 1 - layer;
        for (int step = 0; step < last - first; step++) {
            int top = matrix[first][first + step];
            matrix[first][first + step] = matrix[last - step][first];
            matrix[last - step][first] = matrix[last][last - step];
            matrix[last][last - step] = matrix[first + step][last];
            matrix[first + step][last] = top;
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
    { auto matrix = vector<vector<int>>{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; rotateLayers(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}}; rotateLayers(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1}}; rotateLayers(matrix); cout << show(matrix) << endl; }
    { auto matrix = vector<vector<int>>{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}; rotateLayers(matrix); cout << show(matrix) << endl; }
    return 0;
}
