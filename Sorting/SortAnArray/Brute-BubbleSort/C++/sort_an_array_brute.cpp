#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int end = nums.size() - 1;
        while (end > 0) {
            bool swapped = false;
            for (int scan = 0; scan < end; scan++) {
                if (nums[scan] > nums[scan + 1]) {
                    swap(nums[scan], nums[scan + 1]);
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
            end--;
        }
        return nums;
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
    vector<int> nums = {5, 2, 3, 1};
    auto answer = solver.sortArray(nums);
    print(answer);
    return 0;
}
