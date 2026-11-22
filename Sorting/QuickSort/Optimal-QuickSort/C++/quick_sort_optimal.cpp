#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void quickSort(vector<int>& nums) {
        sortRange(nums, 0, (int) nums.size() - 1);
    }

    void sortRange(vector<int>& nums, int low, int high) {
        if (low >= high) {
            return;
        }
        int pivotSpot = partition(nums, low, high);
        sortRange(nums, low, pivotSpot - 1);
        sortRange(nums, pivotSpot + 1, high);
    }

    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[high];
        int wall = low;
        for (int scan = low; scan < high; scan++) {
            if (nums[scan] <= pivot) {
                swap(nums[wall], nums[scan]);
                wall++;
            }
        }
        swap(nums[wall], nums[high]);
        return wall;
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
    solver.quickSort(nums);
    print(nums);
    return 0;
}
