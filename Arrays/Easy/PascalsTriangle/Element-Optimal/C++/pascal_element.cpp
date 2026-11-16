#include <bits/stdc++.h>
using namespace std;

long long pascalElement(int row, int col) {
    long long ans = 1;
    for (int step = 1; step < col; step++) {
        ans = ans * (row - step) / step;
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
    { auto arg0 = 5; auto arg1 = 3; cout << show(pascalElement(arg0, arg1)) << endl; }
    { auto arg0 = 1; auto arg1 = 1; cout << show(pascalElement(arg0, arg1)) << endl; }
    { auto arg0 = 6; auto arg1 = 3; cout << show(pascalElement(arg0, arg1)) << endl; }
    { auto arg0 = 30; auto arg1 = 15; cout << show(pascalElement(arg0, arg1)) << endl; }
    { auto arg0 = 31; auto arg1 = 16; cout << show(pascalElement(arg0, arg1)) << endl; }
    return 0;
}
