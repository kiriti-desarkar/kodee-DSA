#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& shelf, int value, int fromSpot) {
    int low = fromSpot;
    int high = (int)shelf.size();
    while (low < high) {
        int middle = low + (high - low) / 2;
        if (shelf[middle] < value) {
            low = middle + 1;
        } else {
            high = middle;
        }
    }
    return low;
}

vector<int> intersectBinary(vector<int>& shelfA, vector<int>& shelfB) {
    vector<int> common;
    int sizeB = (int)shelfB.size();
    int fromSpot = 0;
    for (int book : shelfA) {
        int found = lowerBound(shelfB, book, fromSpot);
        if (found < sizeB && shelfB[found] == book) {
            common.push_back(book);
            fromSpot = found + 1;
        }
    }
    return common;
}

int main() {
    vector<int> shelfA = {1, 2, 2, 4};
    vector<int> shelfB = {2, 4, 4, 5};
    vector<int> common = intersectBinary(shelfA, shelfB);
    cout << "Intersection: [";
    for (int spot = 0; spot < (int)common.size(); spot++) {
        if (spot > 0) {
            cout << ", ";
        }
        cout << common[spot];
    }
    cout << "]" << endl;
    return 0;
}
