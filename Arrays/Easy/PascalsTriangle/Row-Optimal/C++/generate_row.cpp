#include <bits/stdc++.h>
using namespace std;

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
    { auto arg0 = 5; cout << show(generateRow(arg0)) << endl; }
    { auto arg0 = 1; cout << show(generateRow(arg0)) << endl; }
    { auto arg0 = 2; cout << show(generateRow(arg0)) << endl; }
    { auto arg0 = 7; cout << show(generateRow(arg0)) << endl; }
    return 0;
}
