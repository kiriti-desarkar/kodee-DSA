#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> kSum(vector<int>& nums, long long target, int start, int k) {
        vector<vector<int>> groups;
        // two numbers left: the Two Sum II squeeze
        if (k == 2) {
            int left = start;
            int right = nums.size() - 1;
            while (left < right) {
                long long sum = (long long) nums[left] + nums[right];
                if (sum < target) {
                    left++;
                } else if (sum > target) {
                    right--;
                } else {
                    groups.push_back({nums[left], nums[right]});
                    left++;
                    right--;
                    // skip repeats so the same group is not added twice
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
            return groups;
        }
        for (int pick = start; pick + k <= nums.size(); pick++) {
            // same rule as second > first + 1: the first pick may equal the number before it
            if (pick > start && nums[pick] == nums[pick - 1]) {
                continue;
            }
            for (vector<int> rest : kSum(nums, target - nums[pick], pick + 1, k - 1)) {
                rest.insert(rest.begin(), nums[pick]);
                groups.push_back(rest);
            }
        }
        return groups;
    }

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        return kSum(nums, target, 0, 4);
    }
};

void print(const vector<vector<int>>& quads) {
    cout << "[";
    for (size_t q = 0; q < quads.size(); q++) {
        cout << (q ? ", [" : "[") << quads[q][0] << ", " << quads[q][1] << ", " << quads[q][2] << ", " << quads[q][3] << "]";
    }
    cout << "]" << endl;
}

// Run it locally: g++ four_sum_ksum.cpp -o four_sum && ./four_sum
int main() {
    vector<int> nums1 = {1, 0, -1, 0, -2, 2};
    print(Solution().fourSum(nums1, 0));
    vector<int> nums2 = {2, 2, 2, 2, 2};
    print(Solution().fourSum(nums2, 8));
    vector<int> nums3 = {1000000000, 1000000000, 1000000000, 1000000000};
    print(Solution().fourSum(nums3, -294967296));
}
