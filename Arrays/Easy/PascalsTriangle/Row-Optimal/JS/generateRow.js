function generateRow(row) {
    const rowList = [1];
    let ans = 1;
    for (let col = 1; col < row; col++) {
        ans = ans * (row - col) / col;
        rowList.push(ans);
    }
    return rowList;
}

console.log(JSON.stringify(generateRow(5)).replace(/,/g, ', '));
console.log(JSON.stringify(generateRow(1)).replace(/,/g, ', '));
console.log(JSON.stringify(generateRow(2)).replace(/,/g, ', '));
console.log(JSON.stringify(generateRow(7)).replace(/,/g, ', '));
