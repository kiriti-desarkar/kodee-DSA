#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int size = nums.size();
        for (int next = 1; next < size; next++) {
            int held = nums[next];
            int slot = next;
            while (slot > 0 && nums[slot - 1] > held) {
                nums[slot] = nums[slot - 1];
                slot--;
            }
            nums[slot] = held;
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
