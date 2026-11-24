#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // everything left of newBookSpot is already sorted
        for (int newBookSpot = 1; newBookSpot < (int)nums.size(); newBookSpot++) {
            int newBook = nums[newBookSpot];
            int gap = newBookSpot;
            // shift every bigger book one step right to make room
            while (gap > 0 && nums[gap - 1] > newBook) {
                nums[gap] = nums[gap - 1];
                gap--;
            }
            nums[gap] = newBook;
        }
        return nums;
    }
};

// Run it locally: g++ insertion_sort.cpp -o sort && ./sort
int main() {
    vector<int> nums = {5, 2, 3, 1};
    for (int value : Solution().sortArray(nums)) {
        cout << value << " ";
    }
    cout << endl;
}
