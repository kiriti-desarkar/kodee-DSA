function rotateAnti(matrix) {
    const size = matrix.length;
    for (let row = 0; row < size; row++) {
        for (let col = row + 1; col < size; col++) {
            [matrix[row][col], matrix[col][row]] =
                [matrix[col][row], matrix[row][col]];
        }
    }
    for (let col = 0; col < size; col++) {
        let top = 0;
        let bottom = size - 1;
        while (top < bottom) {
            [matrix[top][col], matrix[bottom][col]] =
                [matrix[bottom][col], matrix[top][col]];
            top++;
            bottom--;
        }
    }
}

{ const matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]; rotateAnti(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]; rotateAnti(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1]]; rotateAnti(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2], [3, 4]]; rotateAnti(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13, 14, 15], [16, 17, 18, 19, 20], [21, 22, 23, 24, 25]]; rotateAnti(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
