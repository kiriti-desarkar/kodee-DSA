function rotate180(matrix) {
    const size = matrix.length;
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
    let top = 0;
    let bottom = size - 1;
    while (top < bottom) {
        [matrix[top], matrix[bottom]] = [matrix[bottom], matrix[top]];
        top++;
        bottom--;
    }
}

{ const matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]; rotate180(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]; rotate180(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1]]; rotate180(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2], [3, 4]]; rotate180(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13, 14, 15], [16, 17, 18, 19, 20], [21, 22, 23, 24, 25]]; rotate180(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
