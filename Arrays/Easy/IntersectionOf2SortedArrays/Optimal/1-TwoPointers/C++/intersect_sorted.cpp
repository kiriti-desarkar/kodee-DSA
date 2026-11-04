#include <bits/stdc++.h>
using namespace std;

vector<int> intersectSorted(vector<int>& shelfA, vector<int>& shelfB) {
    vector<int> common;
    int sizeA = (int)shelfA.size();
    int sizeB = (int)shelfB.size();
    int spotA = 0;
    int spotB = 0;
    while (spotA < sizeA && spotB < sizeB) {
        if (shelfA[spotA] < shelfB[spotB]) {
            spotA++;
        } else if (shelfA[spotA] > shelfB[spotB]) {
            spotB++;
        } else {
            common.push_back(shelfA[spotA]);
            spotA++;
            spotB++;
        }
    }
    return common;
}

int main() {
    vector<int> shelfA = {1, 2, 2, 4};
    vector<int> shelfB = {2, 4, 4, 5};
    vector<int> common = intersectSorted(shelfA, shelfB);
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
