#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        for (int start = 0; start < (int) nums.size(); start++) {
            int count = 0;
            int scan = start;
            while (scan < (int) nums.size() && nums[scan] == 1) {
                count++;
                scan++;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
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
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << solver.findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
