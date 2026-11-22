#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long total = nums.size() + 1;
        long long expected = total * (total + 1) / 2;
        long long actual = 0;
        for (int value : nums) {
            actual += value;
        }
        return (int)(expected - actual);
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
