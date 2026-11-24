#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSortHelper(nums, 0, (int)nums.size() - 1);
        return nums;
    }

private:
    void quickSortHelper(vector<int>& nums, int low, int high) {
        // one number is already sorted
        if (low >= high) {
            return;
        }
        int pivotSpot = partition(nums, low, high);
        quickSortHelper(nums, low, pivotSpot - 1);
        quickSortHelper(nums, pivotSpot + 1, high);
    }

    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[high];
        // everything left of wall is <= pivot
        int wall = low;
        for (int scan = low; scan < high; scan++) {
            if (nums[scan] <= pivot) {
                swap(nums[wall], nums[scan]);
                wall++;
            }
        }
        swap(nums[wall], nums[high]);
        return wall;
    }
};

// Run it locally: g++ quick_sort.cpp -o sort && ./sort
int main() {
    vector<int> nums = {5, 2, 3, 1};
    for (int value : Solution().sortArray(nums)) {
        cout << value << " ";
    }
    cout << endl;
}
