#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // after each pass, the biggest bubble rises to sortedEnd
        for (int sortedEnd = nums.size() - 1; sortedEnd > 0; sortedEnd--) {
            bool swapped = false;
            for (int currBubble = 0; currBubble < sortedEnd; currBubble++) {
                int nextBubble = currBubble + 1;
                if (nums[currBubble] > nums[nextBubble]) {
                    swap(nums[currBubble], nums[nextBubble]);
                    swapped = true;
                }
            }
            // a pass with no swaps means the array is already sorted
            if (!swapped) {
                break;
            }
        }
        return nums;
    }
};

// Run it locally: g++ bubble_sort.cpp -o sort && ./sort
int main() {
    vector<int> nums = {5, 2, 3, 1};
    for (int value : Solution().sortArray(nums)) {
        cout << value << " ";
    }
    cout << endl;
}
