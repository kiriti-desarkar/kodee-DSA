#include <bits/stdc++.h>
using namespace std;

vector<int> intersectCounts(vector<int>& shelfA, vector<int>& shelfB) {
    vector<int> smallShelf;
    vector<int> bigShelf;
    if (shelfA.size() <= shelfB.size()) {
        smallShelf = shelfA;
        bigShelf = shelfB;
    } else {
        smallShelf = shelfB;
        bigShelf = shelfA;
    }
    unordered_map<int, int> counts;
    for (int book : smallShelf) {
        counts[book]++;
    }
    vector<int> common;
    for (int book : bigShelf) {
        if (counts[book] > 0) {
            common.push_back(book);
            counts[book]--;
        }
    }
    return common;
}

vector<int> intersectSmallValues(vector<int>& shelfA, vector<int>& shelfB) {
    vector<int> counts(1001, 0);
    for (int book : shelfA) {
        counts[book]++;
    }
    vector<int> common;
    for (int book : shelfB) {
        if (counts[book] > 0) {
            common.push_back(book);
            counts[book]--;
        }
    }
    return common;
}

void printShelf(vector<int>& common) {
    cout << "Intersection: [";
    for (int spot = 0; spot < (int)common.size(); spot++) {
        if (spot > 0) {
            cout << ", ";
        }
        cout << common[spot];
    }
    cout << "]" << endl;
}

int main() {
    vector<int> shelfA = {1, 2, 2, 4};
    vector<int> shelfB = {2, 4, 4, 5};
    vector<int> common = intersectCounts(shelfA, shelfB);
    printShelf(common);
    vector<int> commonSmall = intersectSmallValues(shelfA, shelfB);
    printShelf(commonSmall);
    return 0;
}
