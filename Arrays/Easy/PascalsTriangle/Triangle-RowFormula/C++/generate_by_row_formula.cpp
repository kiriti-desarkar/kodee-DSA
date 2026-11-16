#include <bits/stdc++.h>
using namespace std;

// LeetCode 118, version (b): build every row with the round two formula.
vector<int> generateRow(int row) {
    vector<int> rowList;
    rowList.push_back(1);
    long long ans = 1;
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col) / col;
        rowList.push_back(ans);
    }
    return rowList;
}

vector<vector<int>> generateByRowFormula(int numRows) {
    vector<vector<int>> triangle;
    for (int row = 1; row <= numRows; row++) {
        triangle.push_back(generateRow(row));
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
    { auto arg0 = 5; cout << show(generateByRowFormula(arg0)) << endl; }
    { auto arg0 = 1; cout << show(generateByRowFormula(arg0)) << endl; }
    { auto arg0 = 2; cout << show(generateByRowFormula(arg0)) << endl; }
    return 0;
}
