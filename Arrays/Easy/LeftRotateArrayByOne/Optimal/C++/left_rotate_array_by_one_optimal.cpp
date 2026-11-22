#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateByOne(vector<int>& nums) {
        int first = nums[0];
        for (int scan = 1; scan < (int) nums.size(); scan++) {
            nums[scan - 1] = nums[scan];
        }
        nums[nums.size() - 1] = first;
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
    vector<int> nums = {1, 2, 3, 4, 5};
    solver.rotateByOne(nums);
    print(nums);
    return 0;
}
