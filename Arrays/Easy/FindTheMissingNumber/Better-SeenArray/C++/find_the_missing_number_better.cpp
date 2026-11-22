#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total = nums.size() + 1;
        vector<bool> seen(total + 1, false);
        for (int value : nums) {
            seen[value] = true;
        }
        for (int wanted = 1; wanted <= total; wanted++) {
            if (!seen[wanted]) {
                return wanted;
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
    vector<int> nums = {1, 2, 4, 5};
    cout << solver.missingNumber(nums) << endl;
    return 0;
}
