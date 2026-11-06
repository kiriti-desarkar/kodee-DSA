#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int low, int mid, int high) {
    vector<int> temp(high - low + 1);
    int left = low;
    int right = mid + 1;
    int spot = 0;
    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp[spot] = nums[left];
            left++;
        } else {
            temp[spot] = nums[right];
            right++;
        }
        spot++;
    }
    while (left <= mid) {
        temp[spot] = nums[left];
        left++;
        spot++;
    }
    while (right <= high) {
        temp[spot] = nums[right];
        right++;
        spot++;
    }
    for (spot = 0; spot < temp.size(); spot++) {
        nums[low + spot] = temp[spot];
    }
}

void mergeSort(vector<int>& nums, int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = low + (high - low) / 2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);
    merge(nums, low, mid, high);
}

int main() {
    vector<int> nums = {5, 2, 8, 1};
    mergeSort(nums, 0, nums.size() - 1);
    for (int x : nums) cout << x << " ";
    cout << endl; // 1 2 5 8
    return 0;
}
