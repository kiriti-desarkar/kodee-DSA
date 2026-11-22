#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeBySign(vector<int>& nums) {
    int size = nums.size();
    vector<int> result(size);
    int posIndex = 0;
    int negIndex = 1;
    for (int scan = 0; scan < size; scan++) {
        if (nums[scan] > 0) {
            result[posIndex] = nums[scan];
            posIndex += 2;
        } else {
            result[negIndex] = nums[scan];
            negIndex += 2;
        }
    }
    return result;
}

void printList(const vector<int>& values) {
    cout << "[";
    for (size_t spot = 0; spot < values.size(); spot++) {
        if (spot > 0) {
            cout << ", ";
        }
        cout << values[spot];
    }
    cout << "]\n";
}

int main() {
    vector<int> nums1 = {3, 1, -2, -5, 2, -4};
    printList(rearrangeBySign(nums1));
    vector<int> nums2 = {-1, 2, -3, 4};
    printList(rearrangeBySign(nums2));
    vector<int> nums3 = {1, 2, 3, -4, -5, -6};
    printList(rearrangeBySign(nums3));
    return 0;
}
