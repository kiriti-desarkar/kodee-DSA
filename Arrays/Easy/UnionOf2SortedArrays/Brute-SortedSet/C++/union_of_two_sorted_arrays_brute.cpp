#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int>& nums1, vector<int>& nums2) {
        set<int> seen;
        for (int value : nums1) {
            seen.insert(value);
        }
        for (int value : nums2) {
            seen.insert(value);
        }
        return vector<int>(seen.begin(), seen.end());
    }
};

void print(const vector<int>& values) {
    cout << "[";
    for (size_t spot = 0; spot < values.size(); spot++) {
        if (spot > 0) {
            cout << ", ";
        }
        cout << values[spot];
    }
    cout << "]" << endl;
}

void print(const vector<vector<int>>& grid) {
    for (const vector<int>& line : grid) {
        print(line);
    }
}

int main() {
    Solution solver;
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 3, 6, 7};
    auto answer = solver.findUnion(nums1, nums2);
    print(answer);
    return 0;
}
