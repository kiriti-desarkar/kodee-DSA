#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> leadersBrute(vector<int>& nums) {
    int size = nums.size();
    vector<int> leaders;
    for (int scan = 0; scan < size; scan++) {
        bool isLeader = true;
        for (int right = scan + 1; right < size; right++) {
            if (nums[right] >= nums[scan]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            leaders.push_back(nums[scan]);
        }
    }
    return leaders;
}

int main() {
    vector<int> a = {4, 9, 2, 6, 3};
    for (int x : leadersBrute(a)) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
