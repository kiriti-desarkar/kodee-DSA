function generate(numRows) {
    const triangle = [];
    for (let row = 0; row < numRows; row++) {
        const rowList = [];
        for (let col = 0; col <= row; col++) {
            if (col === 0 || col === row) {
                rowList.push(1);
            } else {
                const prev = triangle[row - 1];
                rowList.push(prev[col - 1] + prev[col]);
            }
        }
        triangle.push(rowList);
    }
    return triangle;
}

console.log(JSON.stringify(generate(5)).replace(/,/g, ', '));
console.log(JSON.stringify(generate(1)).replace(/,/g, ', '));
console.log(JSON.stringify(generate(2)).replace(/,/g, ', '));
