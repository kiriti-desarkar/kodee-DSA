#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insertionSort(vector<int>& nums) {
        int size = nums.size();
        for (int next = 1; next < size; next++) {
            int slot = next;
            while (slot > 0 && nums[slot - 1] > nums[slot]) {
                swap(nums[slot], nums[slot - 1]);
                slot--;
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
    solver.insertionSort(nums);
    print(nums);
    return 0;
}
