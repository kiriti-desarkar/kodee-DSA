#include <bits/stdc++.h>
using namespace std;

// Brute force: n C r with factorials. Correct on paper, but factorials overflow fast.
// int breaks at 13!, long long breaks at 21! (so row 22 already gives a wrong answer).
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = result * i;
    }
    return result;
}

long long pascalElementBrute(int row, int col) {
    long long top = factorial(row - 1);
    long long bottom = factorial(col - 1) * factorial(row - col);
    return top / bottom;
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
    { auto arg0 = 5; auto arg1 = 3; cout << show(pascalElementBrute(arg0, arg1)) << endl; }
    { auto arg0 = 1; auto arg1 = 1; cout << show(pascalElementBrute(arg0, arg1)) << endl; }
    { auto arg0 = 6; auto arg1 = 3; cout << show(pascalElementBrute(arg0, arg1)) << endl; }
    { auto arg0 = 21; auto arg1 = 11; cout << show(pascalElementBrute(arg0, arg1)) << endl; }
    return 0;
}
