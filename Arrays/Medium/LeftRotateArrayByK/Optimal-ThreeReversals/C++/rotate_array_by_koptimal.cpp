#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void leftRotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        if (k == 0) {
            return;
        }
        reverseRange(nums, 0, k - 1);
        reverseRange(nums, k, size - 1);
        reverseRange(nums, 0, size - 1);
    }

    void reverseRange(vector<int>& nums, int left, int right) {
        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
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
