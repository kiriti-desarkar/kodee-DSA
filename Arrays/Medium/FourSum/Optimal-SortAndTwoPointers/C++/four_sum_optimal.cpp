#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> quads;
        for (int first = 0; first + 3 < nums.size(); first++) {
            // same first number as last time: its quads are already found
            if (first > 0 && nums[first] == nums[first - 1]) {
                continue;
            }
            for (int second = first + 1; second + 2 < nums.size(); second++) {
                // second may equal first once (2, 2, ...); after that an equal second is a repeat
                if (second > first + 1 && nums[second] == nums[second - 1]) {
                    continue;
                }
                int left = second + 1;
                int right = nums.size() - 1;
                while (left < right) {
                    // long: four big ints can go past the int limit (overflow)
                    long long sum = (long long) nums[first] + nums[second]
                        + nums[left] + nums[right];
                    if (sum < target) {
                        left++;
                    } else if (sum > target) {
                        right--;
                    } else {
                        quads.push_back({nums[first], nums[second],
                            nums[left], nums[right]});
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
            }
        }
        return quads;
    }
};

void print(const vector<vector<int>>& quads) {
    cout << "[";
    for (size_t q = 0; q < quads.size(); q++) {
        cout << (q ? ", [" : "[") << quads[q][0] << ", " << quads[q][1] << ", " << quads[q][2] << ", " << quads[q][3] << "]";
    }
    cout << "]" << endl;
}

// Run it locally: g++ four_sum_optimal.cpp -o four_sum && ./four_sum
int main() {
    vector<int> nums1 = {1, 0, -1, 0, -2, 2};
    print(Solution().fourSum(nums1, 0));
    vector<int> nums2 = {2, 2, 2, 2, 2};
    print(Solution().fourSum(nums2, 8));
    vector<int> nums3 = {1000000000, 1000000000, 1000000000, 1000000000};
    print(Solution().fourSum(nums3, -294967296));
}
