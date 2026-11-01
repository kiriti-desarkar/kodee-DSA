#include <bits/stdc++.h>
using namespace std;

vector<int> intersectOnDisk(vector<int>& smallShelf, vector<vector<int>>& bigShelfChunks) {
    unordered_map<int, int> counts;
    for (int book : smallShelf) {
        counts[book]++;
    }
    vector<int> common;
    for (vector<int>& chunk : bigShelfChunks) {
        for (int book : chunk) {
            if (counts[book] > 0) {
                common.push_back(book);
                counts[book]--;
            }
        }
    }
    return common;
}

int main() {
    vector<int> smallShelf = {1, 2, 2, 4};
    vector<vector<int>> bigShelfChunks = {{2, 4}, {4, 5}};
    vector<int> common = intersectOnDisk(smallShelf, bigShelfChunks);
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
