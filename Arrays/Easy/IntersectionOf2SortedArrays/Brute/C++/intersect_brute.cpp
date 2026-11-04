#include <bits/stdc++.h>
using namespace std;

vector<int> intersectBrute(vector<int>& shelfA, vector<int>& shelfB) {
    int sizeB = (int)shelfB.size();
    vector<bool> taken(sizeB, false);
    vector<int> common;
    for (int book : shelfA) {
        for (int spotB = 0; spotB < sizeB; spotB++) {
            if (!taken[spotB] && shelfB[spotB] == book) {
                taken[spotB] = true;
                common.push_back(book);
                break;
            }
        }
    }
    return common;
}

int main() {
    vector<int> shelfA = {1, 2, 2, 4};
    vector<int> shelfB = {2, 4, 4, 5};
    vector<int> common = intersectBrute(shelfA, shelfB);
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
