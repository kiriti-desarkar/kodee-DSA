#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> found;
        for (int first = 0; first < nums.size(); first++) {
            for (int second = first + 1; second < nums.size(); second++) {
                // fresh for every (first, second): only cards after second
                unordered_set<long long> seen;
                for (int third = second + 1; third < nums.size(); third++) {
                    // long: the subtraction can go past the int limit (overflow)
                    long long need = (long long) target - nums[first]
                        - nums[second] - nums[third];
                    if (seen.count(need)) {
                        vector<int> quad = {nums[first], nums[second],
                            nums[third], (int) need};
                        // sorted, so the same four numbers always look the same
                        sort(quad.begin(), quad.end());
                        found.insert(quad);
                    }
                    seen.insert(nums[third]);
                }
            }
        }
        return vector<vector<int>>(found.begin(), found.end());
    }
};

void print(const vector<vector<int>>& quads) {
    cout << "[";
    for (size_t q = 0; q < quads.size(); q++) {
        cout << (q ? ", [" : "[") << quads[q][0] << ", " << quads[q][1] << ", " << quads[q][2] << ", " << quads[q][3] << "]";
    }
    cout << "]" << endl;
}

// Run it locally: g++ four_sum_better.cpp -o four_sum && ./four_sum
int main() {
    vector<int> nums1 = {1, 0, -1, 0, -2, 2};
    print(Solution().fourSum(nums1, 0));
    vector<int> nums2 = {2, 2, 2, 2, 2};
    print(Solution().fourSum(nums2, 8));
    vector<int> nums3 = {1000000000, 1000000000, 1000000000, 1000000000};
    print(Solution().fourSum(nums3, -294967296));
}
