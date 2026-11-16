function pascalElement(row, col) {
    let ans = 1;
    for (let i = 1; i < col; i++) {
        ans = ans * (row - i) / i;
    }
    return ans;
}

console.log(JSON.stringify(pascalElement(5, 3)).replace(/,/g, ', '));
console.log(JSON.stringify(pascalElement(1, 1)).replace(/,/g, ', '));
console.log(JSON.stringify(pascalElement(6, 3)).replace(/,/g, ', '));
console.log(JSON.stringify(pascalElement(30, 15)).replace(/,/g, ', '));
console.log(JSON.stringify(pascalElement(31, 16)).replace(/,/g, ', '));
