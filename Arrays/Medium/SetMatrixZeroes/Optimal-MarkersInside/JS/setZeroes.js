function setZeroes(matrix) {
    const rows = matrix.length;
    const cols = matrix[0].length;
    let rowZero = false;
    let colZero = false;
    for (let col = 0; col < cols; col++) {
        if (matrix[0][col] === 0) {
            rowZero = true;
        }
    }
    for (let row = 0; row < rows; row++) {
        if (matrix[row][0] === 0) {
            colZero = true;
        }
    }
    for (let row = 1; row < rows; row++) {
        for (let col = 1; col < cols; col++) {
            if (matrix[row][col] === 0) {
                matrix[row][0] = 0;
                matrix[0][col] = 0;
            }
        }
    }
    for (let row = 1; row < rows; row++) {
        for (let col = 1; col < cols; col++) {
            if (matrix[row][0] === 0 || matrix[0][col] === 0) {
                matrix[row][col] = 0;
            }
        }
    }
    if (rowZero) {
        for (let col = 0; col < cols; col++) {
            matrix[0][col] = 0;
        }
    }
    if (colZero) {
        for (let row = 0; row < rows; row++) {
            matrix[row][0] = 0;
        }
    }
}

{ const matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]; setZeroes(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]; setZeroes(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [9, 10, 11, 12], [13, 14, 0, 16]]; setZeroes(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1]]; setZeroes(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[0]]; setZeroes(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[-1, 2], [3, 0]]; setZeroes(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [0, 10, 11, 12], [13, 14, 15, 0]]; setZeroes(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
