function rotateRect(matrix) {
    const rows = matrix.length;
    const cols = matrix[0].length;
    const ans = Array.from({ length: cols }, () => new Array(rows).fill(0));
    for (let row = 0; row < rows; row++) {
        for (let col = 0; col < cols; col++) {
            ans[col][rows - 1 - row] = matrix[row][col];
        }
    }
    return ans;
}

console.log(JSON.stringify(rotateRect([[1, 2, 3], [4, 5, 6]])).replace(/,/g, ', '));
console.log(JSON.stringify(rotateRect([[1], [2], [3]])).replace(/,/g, ', '));
console.log(JSON.stringify(rotateRect([[1, 2, 3, 4]])).replace(/,/g, ', '));
console.log(JSON.stringify(rotateRect([[1, 2, 3], [4, 5, 6], [7, 8, 9]])).replace(/,/g, ', '));
