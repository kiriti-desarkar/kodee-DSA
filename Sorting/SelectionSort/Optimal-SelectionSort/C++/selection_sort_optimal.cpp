#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void selectionSort(vector<int>& nums) {
        int size = nums.size();
        for (int sortedEnd = 0; sortedEnd < size - 1; sortedEnd++) {
            int minSpot = sortedEnd;
            for (int scan = sortedEnd + 1; scan < size; scan++) {
                if (nums[scan] < nums[minSpot]) {
                    minSpot = scan;
                }
            }
            if (minSpot != sortedEnd) {
                swap(nums[sortedEnd], nums[minSpot]);
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
    solver.selectionSort(nums);
    print(nums);
    return 0;
}
