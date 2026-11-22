#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int scan = 0; scan < (int) nums.size(); scan++) {
            if (nums[scan] == target) {
                return scan;
            }
        }
        return -1;
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
    vector<int> nums = {2, 5, 8, 12, 16, 23, 38, 56};
    int target = 23;
    cout << solver.search(nums, target) << endl;
    return 0;
}
