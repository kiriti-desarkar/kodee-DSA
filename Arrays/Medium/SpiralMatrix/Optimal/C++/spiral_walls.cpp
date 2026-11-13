#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralWalls(vector<vector<int>>& matrix) {
    vector<int> result;
    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;
    while (top <= bottom && left <= right) {
        for (int col = left; col <= right; col++) {
            result.push_back(matrix[top][col]);
        }
        top++;
        for (int row = top; row <= bottom; row++) {
            result.push_back(matrix[row][right]);
        }
        right--;
        if (top <= bottom) {
            for (int col = right; col >= left; col--) {
                result.push_back(matrix[bottom][col]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int row = bottom; row >= top; row--) {
                result.push_back(matrix[row][left]);
            }
            left++;
        }
    }
    return result;
}

void printList(const vector<int>& values) {
    cout << "[";
    for (size_t index = 0; index < values.size(); index++) {
        cout << (index ? ", " : "") << values[index];
    }
    cout << "]" << endl;
}

int main() {
    { vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; printList(spiralWalls(matrix)); }
    { vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}; printList(spiralWalls(matrix)); }
    { vector<vector<int>> matrix = {{1, 2, 3}}; printList(spiralWalls(matrix)); }
    { vector<vector<int>> matrix = {{1}, {2}, {3}}; printList(spiralWalls(matrix)); }
    return 0;
}
