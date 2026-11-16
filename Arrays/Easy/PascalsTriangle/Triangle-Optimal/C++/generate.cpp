#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;
    for (int row = 0; row < numRows; row++) {
        vector<int> rowList;
        for (int col = 0; col <= row; col++) {
            if (col == 0 || col == row) {
                rowList.push_back(1);
            } else {
                vector<int>& prev = triangle[row - 1];
                rowList.push_back(prev[col - 1] + prev[col]);
            }
        }
        triangle.push_back(rowList);
    }
    return triangle;
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
    { auto arg0 = 5; cout << show(generate(arg0)) << endl; }
    { auto arg0 = 1; cout << show(generate(arg0)) << endl; }
    { auto arg0 = 2; cout << show(generate(arg0)) << endl; }
    return 0;
}
