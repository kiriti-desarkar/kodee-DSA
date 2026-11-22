#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bubbleSort(vector<int>& nums) {
        int size = nums.size();
        for (int pass = 0; pass < size - 1; pass++) {
            for (int scan = 0; scan < size - 1; scan++) {
                if (nums[scan] > nums[scan + 1]) {
                    swap(nums[scan], nums[scan + 1]);
                }
            }
        }
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
    vector<int> nums = {7, 2, 8, 1, 5};
    solver.bubbleSort(nums);
    print(nums);
    return 0;
}
