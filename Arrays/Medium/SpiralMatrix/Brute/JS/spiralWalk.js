function spiralWalk(matrix) {
    const rows = matrix.length;
    const cols = matrix[0].length;
    const result = [];
    const visited = Array.from({ length: rows }, () => new Array(cols).fill(false));
    const rowStep = [0, 1, 0, -1];
    const colStep = [1, 0, -1, 0];
    let row = 0;
    let col = 0;
    let direction = 0;
    for (let step = 0; step < rows * cols; step++) {
        result.push(matrix[row][col]);
        visited[row][col] = true;
        let nextRow = row + rowStep[direction];
        let nextCol = col + colStep[direction];
        const rowOutside = nextRow < 0 || nextRow >= rows;
        const colOutside = nextCol < 0 || nextCol >= cols;
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

console.log(JSON.stringify(spiralWalk([[1, 2, 3], [4, 5, 6], [7, 8, 9]])));
console.log(JSON.stringify(spiralWalk([[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]])));
console.log(JSON.stringify(spiralWalk([[1, 2, 3]])));
console.log(JSON.stringify(spiralWalk([[1], [2], [3]])));
