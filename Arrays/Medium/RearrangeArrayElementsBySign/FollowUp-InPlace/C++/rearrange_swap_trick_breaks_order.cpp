// WARNING: the swap trick BREAKS ORDER. Signs alternate, but same-sign numbers can change order. Shown only as a counter-example; the order-keeping shift version (rearrangeInPlace) in this folder is the correct in-place answer.
#include <utility>
#include <iostream>
#include <vector>
using namespace std;

void rearrangeSwapTrick(vector<int>& nums) {
    int size = nums.size();
    int evenSeat = 0;
    int oddSeat = 1;
    while (evenSeat < size && oddSeat < size) {
        if (nums[evenSeat] > 0) {
            evenSeat += 2;
        } else if (nums[oddSeat] < 0) {
            oddSeat += 2;
        } else {
            swap(nums[evenSeat], nums[oddSeat]);
            evenSeat += 2;
            oddSeat += 2;
        }
    }
}

void printList(const vector<int>& values) {
    cout << "[";
    for (size_t i = 0; i < values.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << values[i];
    }
    cout << "]\n";
}

int main() {
    vector<int> nums1 = {3, 1, -2, -5, 2, -4};
    rearrangeSwapTrick(nums1);
    printList(nums1);
    vector<int> nums2 = {1, 2, 3, -4, -5, -6};
    rearrangeSwapTrick(nums2);
    printList(nums2);
    return 0;
}
