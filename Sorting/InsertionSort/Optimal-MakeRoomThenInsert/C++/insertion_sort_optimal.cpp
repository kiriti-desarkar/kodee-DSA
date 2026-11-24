#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void insertionSort(vector<int>& nums) {
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
    }
};

// Run it locally: g++ insertion_sort_optimal.cpp -o insertion && ./insertion
int main() {
    vector<int> nums = {7, 2, 8, 1, 5};
    Solution().insertionSort(nums);
    for (int value : nums) {
        cout << value << " ";
    }
    cout << endl;
}
