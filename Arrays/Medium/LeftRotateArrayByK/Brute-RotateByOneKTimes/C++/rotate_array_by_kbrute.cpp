#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void leftRotate(vector<int>& nums, int k) {
        int size = nums.size();
        int rounds = k % size;
        for (int round = 0; round < rounds; round++) {
            int first = nums[0];
            for (int scan = 1; scan < size; scan++) {
                nums[scan - 1] = nums[scan];
            }
            nums[size - 1] = first;
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
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    solver.leftRotate(nums, k);
    print(nums);
    return 0;
}
