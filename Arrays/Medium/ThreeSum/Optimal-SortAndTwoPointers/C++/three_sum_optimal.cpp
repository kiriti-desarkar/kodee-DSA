#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;
        for (int first = 0; first + 2 < nums.size(); first++) {
            // same first number as last time: its triplets are already found
            if (first > 0 && nums[first] == nums[first - 1]) {
                continue;
            }
            int left = first + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums[first] + nums[left] + nums[right];
                if (sum < 0) {
                    left++;
                } else if (sum > 0) {
                    right--;
                } else {
                    triplets.push_back({nums[first], nums[left], nums[right]});
                    left++;
                    right--;
                    // skip repeats so the same triplet is not added twice
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
        }
        return triplets;
    }
};

// Run it locally: g++ three_sum_optimal.cpp -o three_sum && ./three_sum
int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    for (const vector<int>& triplet : Solution().threeSum(nums)) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "] ";
    }
    cout << endl;
}
