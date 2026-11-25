#include <bits/stdc++.h>
using namespace std;

vector<int> twoSumSorted(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return {left + 1, right + 1};
        }
        if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {};
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
    { auto arg0 = vector<int>{2, 7, 11, 15}; auto arg1 = 9; cout << show(twoSumSorted(arg0, arg1)) << endl; }
    { auto arg0 = vector<int>{2, 3, 4}; auto arg1 = 6; cout << show(twoSumSorted(arg0, arg1)) << endl; }
    { auto arg0 = vector<int>{-1, 0}; auto arg1 = -1; cout << show(twoSumSorted(arg0, arg1)) << endl; }
    { auto arg0 = vector<int>{2, 3, 6, 9}; auto arg1 = 9; cout << show(twoSumSorted(arg0, arg1)) << endl; }
    { auto arg0 = vector<int>{1, 2, 4, 5, 10, 13, 14, 16}; auto arg1 = 9; cout << show(twoSumSorted(arg0, arg1)) << endl; }
    return 0;
}
