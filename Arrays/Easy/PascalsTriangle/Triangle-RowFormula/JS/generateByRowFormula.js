// LeetCode 118, version (b): build every row with the round two formula.
function generateRow(row) {
    const rowList = [1];
    let ans = 1;
    for (let col = 1; col < row; col++) {
        ans = ans * (row - col) / col;
        rowList.push(ans);
    }
    return rowList;
}

function generateByRowFormula(numRows) {
    const triangle = [];
    for (let row = 1; row <= numRows; row++) {
        triangle.push(generateRow(row));
    }
    return triangle;
}

console.log(JSON.stringify(generateByRowFormula(5)).replace(/,/g, ', '));
console.log(JSON.stringify(generateByRowFormula(1)).replace(/,/g, ', '));
console.log(JSON.stringify(generateByRowFormula(2)).replace(/,/g, ', '));
