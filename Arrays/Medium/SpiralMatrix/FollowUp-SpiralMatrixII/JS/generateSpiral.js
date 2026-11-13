function generateSpiral(size) {
    const matrix = Array.from({ length: size }, () => new Array(size).fill(0));
    let top = 0;
    let bottom = size - 1;
    let left = 0;
    let right = size - 1;
    let value = 1;
    while (top <= bottom && left <= right) {
        for (let col = left; col <= right; col++) {
            matrix[top][col] = value;
            value++;
        }
        top++;
        for (let row = top; row <= bottom; row++) {
            matrix[row][right] = value;
            value++;
        }
        right--;
        if (top <= bottom) {
            for (let col = right; col >= left; col--) {
                matrix[bottom][col] = value;
                value++;
            }
            bottom--;
        }
        if (left <= right) {
            for (let row = bottom; row >= top; row--) {
                matrix[row][left] = value;
                value++;
            }
            left++;
        }
    }
    return matrix;
}

console.log(JSON.stringify(generateSpiral(1)));
console.log(JSON.stringify(generateSpiral(3)));
console.log(JSON.stringify(generateSpiral(4)));
