#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralWalk(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int> result;
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    int rowStep[4] = {0, 1, 0, -1};
    int colStep[4] = {1, 0, -1, 0};
    int row = 0;
    int col = 0;
    int direction = 0;
    for (int step = 0; step < rows * cols; step++) {
        result.push_back(matrix[row][col]);
        visited[row][col] = true;
        int nextRow = row + rowStep[direction];
        int nextCol = col + colStep[direction];
        bool rowOutside = nextRow < 0 || nextRow >= rows;
        bool colOutside = nextCol < 0 || nextCol >= cols;
        if (rowOutside || colOutside || visited[nextRow][nextCol]) {
            direction = (direction + 1) % 4;
            nextRow = row + rowStep[direction];
            nextCol = col + colStep[direction];
        }
        row = nextRow;
        col = nextCol;
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
    { vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; printList(spiralWalk(matrix)); }
    { vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}; printList(spiralWalk(matrix)); }
    { vector<vector<int>> matrix = {{1, 2, 3}}; printList(spiralWalk(matrix)); }
    { vector<vector<int>> matrix = {{1}, {2}, {3}}; printList(spiralWalk(matrix)); }
    return 0;
}
