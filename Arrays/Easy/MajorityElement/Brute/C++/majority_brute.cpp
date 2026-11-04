#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& shelf) {
    int size = (int) shelf.size();
    for (int volume : shelf) {
        int copies = 0;
        for (int book : shelf) {
            if (book == volume) {
                copies++;
            }
        }
        if (copies > size / 2) {
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
