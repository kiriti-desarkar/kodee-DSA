#include <iostream>
#include <vector>
using namespace std;

void rearrangeInPlace(vector<int>& nums) {
    int size = nums.size();
    for (int seat = 0; seat < size; seat++) {
        bool needsPositive = seat % 2 == 0;
        bool isPositive = nums[seat] > 0;
        if (needsPositive == isPositive) {
            continue;
        }
        int matchIndex = seat + 1;
        while ((nums[matchIndex] > 0) != needsPositive) {
            matchIndex++;
        }
        int movedValue = nums[matchIndex];
        for (int shiftIndex = matchIndex; shiftIndex > seat; shiftIndex--) {
            nums[shiftIndex] = nums[shiftIndex - 1];
        }
        nums[seat] = movedValue;
    }
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
    rearrangeInPlace(nums1);
    printList(nums1);
    vector<int> nums2 = {-1, 2, -3, 4};
    rearrangeInPlace(nums2);
    printList(nums2);
    vector<int> nums3 = {1, 2, 3, -4, -5, -6};
    rearrangeInPlace(nums3);
    printList(nums3);
    return 0;
}
