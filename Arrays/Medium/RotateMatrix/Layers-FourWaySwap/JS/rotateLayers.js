function rotateLayers(matrix) {
    const size = matrix.length;
    for (let layer = 0; layer < Math.floor(size / 2); layer++) {
        const first = layer;
        const last = size - 1 - layer;
        for (let step = 0; step < last - first; step++) {
            const top = matrix[first][first + step];
            matrix[first][first + step] = matrix[last - step][first];
            matrix[last - step][first] = matrix[last][last - step];
            matrix[last][last - step] = matrix[first + step][last];
            matrix[first + step][last] = top;
        }
    }
}

{ const matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]; rotateLayers(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[5, 1, 9, 11], [2, 4, 8, 10], [13, 3, 6, 7], [15, 14, 12, 16]]; rotateLayers(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1]]; rotateLayers(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
{ const matrix = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13, 14, 15], [16, 17, 18, 19, 20], [21, 22, 23, 24, 25]]; rotateLayers(matrix); console.log(JSON.stringify(matrix).replace(/,/g, ', ')); }
