function pascalElement(row, col) {
    let ans = 1;
    for (let step = 1; step < col; step++) {
        ans = ans * (row - step) / step;
    }
    return ans;
}

console.log(JSON.stringify(pascalElement(5, 3)).replace(/,/g, ', '));
console.log(JSON.stringify(pascalElement(1, 1)).replace(/,/g, ', '));
console.log(JSON.stringify(pascalElement(6, 3)).replace(/,/g, ', '));
console.log(JSON.stringify(pascalElement(30, 15)).replace(/,/g, ', '));
console.log(JSON.stringify(pascalElement(31, 16)).replace(/,/g, ', '));
