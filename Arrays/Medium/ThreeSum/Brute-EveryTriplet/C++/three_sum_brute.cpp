#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> found;
        for (int first = 0; first < nums.size(); first++) {
            for (int second = first + 1; second < nums.size(); second++) {
                for (int third = second + 1; third < nums.size(); third++) {
                    if (nums[first] + nums[second] + nums[third] == 0) {
                        // sorted, so the same three numbers always look the same
                        vector<int> triplet = {nums[first], nums[second], nums[third]};
                        sort(triplet.begin(), triplet.end());
                        found.insert(triplet);
                    }
                }
            }
        }
        return vector<vector<int>>(found.begin(), found.end());
    }
};

// Run it locally: g++ three_sum_brute.cpp -o three_sum && ./three_sum
int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    for (const vector<int>& triplet : Solution().threeSum(nums)) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "] ";
    }
    cout << endl;
}
