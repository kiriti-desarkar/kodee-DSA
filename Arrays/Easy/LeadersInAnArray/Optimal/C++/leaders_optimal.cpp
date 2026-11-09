#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> findLeaders(vector<int>& nums) {
    int size = nums.size();
    vector<int> leaders;
    int maxRight = nums[size - 1];
    leaders.push_back(maxRight);
    for (int scan = size - 2; scan >= 0; scan--) {
        if (nums[scan] > maxRight) {
            maxRight = nums[scan];
            leaders.push_back(maxRight);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> a = {4, 9, 2, 6, 3};
    for (int x : findLeaders(a)) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
