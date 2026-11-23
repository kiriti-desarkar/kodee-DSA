#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void bubbleSort(vector<int>& nums) {
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
    }
};

// Run it locally: g++ bubble_sort_optimal.cpp -o bubble && ./bubble
int main() {
    vector<int> nums = {7, 2, 8, 1, 5};
    Solution().bubbleSort(nums);
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;
}
