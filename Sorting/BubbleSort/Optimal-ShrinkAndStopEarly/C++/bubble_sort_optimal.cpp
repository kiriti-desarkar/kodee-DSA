#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bubbleSort(vector<int>& nums) {
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
