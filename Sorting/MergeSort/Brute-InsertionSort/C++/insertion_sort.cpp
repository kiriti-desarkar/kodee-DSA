#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& nums) {
    int size = nums.size();
    for (int pick = 1; pick < size; pick++) {
        int value = nums[pick];
        int scan = pick - 1;
        while (scan >= 0 && nums[scan] > value) {
            nums[scan + 1] = nums[scan];
            scan--;
        }
        nums[scan + 1] = value;
    }
}

int main() {
    vector<int> nums = {5, 2, 8, 1};
    insertionSort(nums);
    for (int x : nums) cout << x << " ";
    cout << endl; // 1 2 5 8
    return 0;
}
