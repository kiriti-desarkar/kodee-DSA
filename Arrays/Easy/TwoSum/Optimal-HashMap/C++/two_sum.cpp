#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;
    for (int second = 0; second < nums.size(); second++) {
        int need = target - nums[second];
        if (seen.count(need)) {
            return {seen[need], second};
        }
        seen[nums[second]] = second;
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
    { auto arg0 = vector<int>{2, 7, 11, 15}; auto arg1 = 9; cout << show(twoSum(arg0, arg1)) << endl; }
    { auto arg0 = vector<int>{3, 2, 4}; auto arg1 = 6; cout << show(twoSum(arg0, arg1)) << endl; }
    { auto arg0 = vector<int>{3, 3}; auto arg1 = 6; cout << show(twoSum(arg0, arg1)) << endl; }
    { auto arg0 = vector<int>{11, 15, 2, 7}; auto arg1 = 9; cout << show(twoSum(arg0, arg1)) << endl; }
    { auto arg0 = vector<int>{11, 4, 15, 9, 2, 13, 7, 6}; auto arg1 = 9; cout << show(twoSum(arg0, arg1)) << endl; }
    { auto arg0 = vector<int>{-3, 4, 3, 90}; auto arg1 = 0; cout << show(twoSum(arg0, arg1)) << endl; }
    return 0;
}
