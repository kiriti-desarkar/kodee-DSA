function setZeroesBetter(matrix) {
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

{ const matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]; setZeroesBetter(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]; setZeroesBetter(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [9, 10, 11, 12], [13, 14, 0, 16]]; setZeroesBetter(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1]]; setZeroesBetter(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[0]]; setZeroesBetter(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[-1, 2], [3, 0]]; setZeroesBetter(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [0, 10, 11, 12], [13, 14, 15, 0]]; setZeroesBetter(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
