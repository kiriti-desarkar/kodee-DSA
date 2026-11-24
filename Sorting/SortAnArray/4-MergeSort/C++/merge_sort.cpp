#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSortHelper(nums, 0, (int)nums.size() - 1);
        return nums;
    }

private:
    void mergeSortHelper(vector<int>& nums, int low, int high) {
        // one number is already sorted
        if (low >= high) {
            return;
        }
        int mid = low + (high - low) / 2;
        mergeSortHelper(nums, low, mid);
        mergeSortHelper(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }

    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> merged;
        int leftSpot = low;
        int rightSpot = mid + 1;
        // always take the smaller front number of the two sorted halves
        while (leftSpot <= mid && rightSpot <= high) {
            if (nums[leftSpot] <= nums[rightSpot]) {
                merged.push_back(nums[leftSpot++]);
            } else {
                merged.push_back(nums[rightSpot++]);
            }
        }
        while (leftSpot <= mid) {
            merged.push_back(nums[leftSpot++]);
        }
        while (rightSpot <= high) {
            merged.push_back(nums[rightSpot++]);
        }
        copy(merged.begin(), merged.end(), nums.begin() + low);
    }
};

// Run it locally: g++ merge_sort.cpp -o sort && ./sort
int main() {
    vector<int> nums = {5, 2, 3, 1};
    for (int value : Solution().sortArray(nums)) {
        cout << value << " ";
    }
    cout << endl;
}
