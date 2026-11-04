#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& shelf) {
    int size = (int) shelf.size();
    unsigned int answer = 0;
    for (int bit = 0; bit < 32; bit++) {
        int ones = 0;
        for (int volume : shelf) {
            if (((volume >> bit) & 1) == 1) {
                ones++;
            }
        }
        if (ones > size / 2) {
            answer = answer | (1u << bit);
        }
    }
    return (int) answer;
}

int main() {
    vector<int> shelf = {3, 7, 7, 5, 7};
    cout << "Majority: " << majorityElement(shelf) << endl;
    return 0;
}
