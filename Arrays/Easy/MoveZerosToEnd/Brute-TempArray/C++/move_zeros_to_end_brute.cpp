#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> nonZeros;
        for (int value : nums) {
            if (value != 0) {
                nonZeros.push_back(value);
            }
        }
        for (int spot = 0; spot < (int)nums.size(); spot++) {
            nums[spot] = spot < (int)nonZeros.size() ? nonZeros[spot] : 0;
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
    vector<int> nums = {0, 1, 0, 3, 12};
    solver.moveZeroes(nums);
    print(nums);
    return 0;
}
