#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void selectionSort(vector<int>& nums) {
        // each pass selects the smallest of the rest and puts it at frontSlot
        for (int frontSlot = 0; frontSlot < (int)nums.size() - 1; frontSlot++) {
            int smallestSpot = frontSlot;
            for (int candidate = frontSlot + 1; candidate < (int)nums.size(); candidate++) {
                if (nums[candidate] < nums[smallestSpot]) {
                    smallestSpot = candidate;
                }
            }
            if (smallestSpot != frontSlot) {
                swap(nums[frontSlot], nums[smallestSpot]);
            }
        }
    }
};

// Run it locally: g++ selection_sort_optimal.cpp -o selection && ./selection
int main() {
    vector<int> nums = {7, 2, 8, 1, 5};
    Solution().selectionSort(nums);
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;
}
