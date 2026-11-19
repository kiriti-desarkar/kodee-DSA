function rotateBrute(matrix) {
    const size = matrix.length;
    const ans = Array.from({ length: size }, () => new Array(size));
    for (let row = 0; row < size; row++) {
        for (let col = 0; col < size; col++) {
            ans[col][size - 1 - row] = matrix[row][col];
        }
    }
    for (let row = 0; row < size; row++) {
        matrix[row] = ans[row];
    }
}

{ const matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]; rotateBrute(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[5, 1, 9, 11], [2, 4, 8, 10], [13, 3, 6, 7], [15, 14, 12, 16]]; rotateBrute(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1]]; rotateBrute(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2], [3, 4]]; rotateBrute(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
