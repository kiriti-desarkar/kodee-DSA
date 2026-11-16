// Brute force: n C r with factorials.
// JavaScript numbers are doubles: factorials lose exactness long before they run out of range.
function factorial(n) {
    let result = 1;
    for (let factor = 2; factor <= n; factor++) {
        result = result * factor;
    }
    return result;
}

function pascalElementBrute(row, col) {
    const top = factorial(row - 1);
    const bottom = factorial(col - 1) * factorial(row - col);
    return Math.floor(top / bottom);
}

console.log(JSON.stringify(pascalElementBrute(5, 3)).replace(/,/g, ', '));
console.log(JSON.stringify(pascalElementBrute(1, 1)).replace(/,/g, ', '));
console.log(JSON.stringify(pascalElementBrute(6, 3)).replace(/,/g, ', '));
console.log(JSON.stringify(pascalElementBrute(21, 11)).replace(/,/g, ', '));
