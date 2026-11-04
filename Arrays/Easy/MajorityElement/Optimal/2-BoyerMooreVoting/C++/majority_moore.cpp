#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& shelf) {
    int candidate = 0;
    int votes = 0;
    for (int volume : shelf) {
        if (votes == 0) {
            candidate = volume;
        }
        if (volume == candidate) {
            votes++;
        } else {
            votes--;
        }
    }
    return candidate;
}

int majorityOrNone(vector<int>& shelf) {
    int size = (int) shelf.size();
    int candidate = majorityElement(shelf);
    // ADDED: the verify pass
    int count = 0;
    for (int volume : shelf) {
        if (volume == candidate) {
            count++;
        }
    }
    if (count > size / 2) {
        return candidate;
    }
    return -1;
}

int main() {
    vector<int> shelf = {3, 7, 7, 5, 7};
    cout << "Majority: " << majorityElement(shelf) << endl;
    return 0;
}
