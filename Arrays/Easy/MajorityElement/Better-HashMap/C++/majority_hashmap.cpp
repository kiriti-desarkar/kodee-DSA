#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& shelf) {
    int size = (int) shelf.size();
    unordered_map<int, int> copiesOf;
    for (int volume : shelf) {
        copiesOf[volume]++;
        if (copiesOf[volume] > size / 2) {
            return volume;
        }
    }
    return -1;
}

int main() {
    vector<int> shelf = {3, 7, 7, 5, 7};
    cout << "Majority: " << majorityElement(shelf) << endl;
    return 0;
}
