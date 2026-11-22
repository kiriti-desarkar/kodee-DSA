#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sortRange(nums, 0, (int) nums.size() - 1);
        return nums;
    }

    void sortRange(vector<int>& nums, int low, int high) {
        if (low >= high) {
            return;
        }
        int mid = low + (high - low) / 2;
        sortRange(nums, low, mid);
        sortRange(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }

    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> merged;
        int leftSpot = low;
        int rightSpot = mid + 1;
        while (leftSpot <= mid && rightSpot <= high) {
            if (nums[leftSpot] <= nums[rightSpot]) {
                merged.push_back(nums[leftSpot]);
                leftSpot++;
            } else {
                merged.push_back(nums[rightSpot]);
                rightSpot++;
            }
        }
        while (leftSpot <= mid) {
            merged.push_back(nums[leftSpot]);
            leftSpot++;
        }
        while (rightSpot <= high) {
            merged.push_back(nums[rightSpot]);
            rightSpot++;
        }
        for (int copy = 0; copy < (int) merged.size(); copy++) {
            nums[low + copy] = merged[copy];
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
    vector<int> nums = {5, 2, 3, 1};
    auto answer = solver.sortArray(nums);
    print(answer);
    return 0;
}
