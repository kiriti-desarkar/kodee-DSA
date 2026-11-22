function setZeroes(matrix) {
    const rows = matrix.length;
    const cols = matrix[0].length;
    const rowMark = new Array(rows).fill(false);
    const colMark = new Array(cols).fill(false);
    for (let row = 0; row < rows; row++) {
        for (let col = 0; col < cols; col++) {
            if (matrix[row][col] === 0) {
                rowMark[row] = true;
                colMark[col] = true;
            }
        }
    }
    for (let row = 0; row < rows; row++) {
        for (let col = 0; col < cols; col++) {
            if (rowMark[row] || colMark[col]) {
                matrix[row][col] = 0;
            }
        }
    }
}

const matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]];
setZeroes(matrix);
console.log(JSON.stringify(matrix).replace(/,/g, ', '));
