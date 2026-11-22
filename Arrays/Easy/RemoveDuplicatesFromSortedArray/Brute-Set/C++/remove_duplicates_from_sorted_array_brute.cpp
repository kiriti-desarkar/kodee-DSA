#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> unique(nums.begin(), nums.end());
        int write = 0;
        for (int value : unique) {
            nums[write] = value;
            write++;
        }
        return write;
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
    vector<int> nums = {1, 1, 2};
    int count = solver.removeDuplicates(nums);
    cout << count << " ";
    print(vector<int>(nums.begin(), nums.begin() + count));
    return 0;
}
