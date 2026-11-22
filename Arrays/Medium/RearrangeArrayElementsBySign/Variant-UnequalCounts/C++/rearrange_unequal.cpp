#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeUnequal(vector<int>& nums) {
    vector<int> positives;
    vector<int> negatives;
    for (int scan = 0; scan < nums.size(); scan++) {
        if (nums[scan] >= 0) {
            positives.push_back(nums[scan]);
        } else {
            negatives.push_back(nums[scan]);
        }
    }
    vector<int> result;
    int pair = 0;
    while (pair < positives.size() && pair < negatives.size()) {
        result.push_back(positives[pair]);
        result.push_back(negatives[pair]);
        pair++;
    }
    while (pair < positives.size()) {
        result.push_back(positives[pair]);
        pair++;
    }
    while (pair < negatives.size()) {
        result.push_back(negatives[pair]);
        pair++;
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
    vector<int> nums1 = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    printList(rearrangeUnequal(nums1));
    vector<int> nums2 = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    printList(rearrangeUnequal(nums2));
    vector<int> nums3 = {3, -1, 5, 7};
    printList(rearrangeUnequal(nums3));
    vector<int> nums4 = {-4, -2};
    printList(rearrangeUnequal(nums4));
    return 0;
}
