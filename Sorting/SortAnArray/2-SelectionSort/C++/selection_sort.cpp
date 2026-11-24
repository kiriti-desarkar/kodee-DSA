#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
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
        return nums;
    }
};

// Run it locally: g++ selection_sort.cpp -o sort && ./sort
int main() {
    vector<int> nums = {5, 2, 3, 1};
    for (int value : Solution().sortArray(nums)) {
        cout << value << " ";
    }
    cout << endl;
}
