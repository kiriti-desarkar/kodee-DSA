function rotate(matrix) {
    const size = matrix.length;
    for (let row = 0; row < size; row++) {
        for (let col = row + 1; col < size; col++) {
            [matrix[row][col], matrix[col][row]] =
                [matrix[col][row], matrix[row][col]];
        }
    }
    for (let row = 0; row < size; row++) {
        let left = 0;
        let right = size - 1;
        while (left < right) {
            [matrix[row][left], matrix[row][right]] =
                [matrix[row][right], matrix[row][left]];
            left++;
            right--;
        }
    }
}

{ const matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]; rotate(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[5, 1, 9, 11], [2, 4, 8, 10], [13, 3, 6, 7], [15, 14, 12, 16]]; rotate(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1]]; rotate(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2], [3, 4]]; rotate(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13, 14, 15], [16, 17, 18, 19, 20], [21, 22, 23, 24, 25]]; rotate(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
