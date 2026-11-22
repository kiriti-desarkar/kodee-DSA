#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        size_t spotA = 0;
        size_t spotB = 0;
        while (spotA < nums1.size() || spotB < nums2.size()) {
            int next;
            if (spotB == nums2.size() || (spotA < nums1.size() && nums1[spotA] <= nums2[spotB])) {
                next = nums1[spotA];
                spotA++;
            } else {
                next = nums2[spotB];
                spotB++;
            }
            if (result.empty() || result.back() != next) {
                result.push_back(next);
            }
        }
        return result;
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
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 3, 6, 7};
    auto answer = solver.findUnion(nums1, nums2);
    print(answer);
    return 0;
}
