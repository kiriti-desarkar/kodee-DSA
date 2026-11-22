function setZeroes(matrix) {
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

const matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]];
setZeroes(matrix);
console.log(JSON.stringify(matrix).replace(/,/g, ', '));
