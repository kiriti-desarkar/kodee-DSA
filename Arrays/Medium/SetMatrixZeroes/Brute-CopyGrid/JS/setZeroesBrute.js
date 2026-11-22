function setZeroesBrute(matrix) {
    const rows = matrix.length;
    const cols = matrix[0].length;
    const copy = matrix.map(line => [...line]);
    for (let row = 0; row < rows; row++) {
        for (let col = 0; col < cols; col++) {
            if (copy[row][col] === 0) {
                for (let across = 0; across < cols; across++) {
                    matrix[row][across] = 0;
                }
                for (let down = 0; down < rows; down++) {
                    matrix[down][col] = 0;
                }
            }
        }
    }
}

{ const matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]; setZeroesBrute(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]; setZeroesBrute(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [9, 10, 11, 12], [13, 14, 0, 16]]; setZeroesBrute(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1]]; setZeroesBrute(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[0]]; setZeroesBrute(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[-1, 2], [3, 0]]; setZeroesBrute(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [0, 10, 11, 12], [13, 14, 15, 0]]; setZeroesBrute(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
