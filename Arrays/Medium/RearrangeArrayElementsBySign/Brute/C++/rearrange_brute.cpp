#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeBrute(vector<int>& nums) {
    int size = nums.size();
    vector<int> positives;
    vector<int> negatives;
    for (int scan = 0; scan < size; scan++) {
        if (nums[scan] > 0) {
            positives.push_back(nums[scan]);
        } else {
            negatives.push_back(nums[scan]);
        }
    }
    vector<int> result(size);
    for (int pair = 0; pair < size / 2; pair++) {
        result[2 * pair] = positives[pair];
        result[2 * pair + 1] = negatives[pair];
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
    printList(rearrangeBrute(nums1));
    vector<int> nums2 = {-1, 2, -3, 4};
    printList(rearrangeBrute(nums2));
    vector<int> nums3 = {1, 2, 3, -4, -5, -6};
    printList(rearrangeBrute(nums3));
    return 0;
}
