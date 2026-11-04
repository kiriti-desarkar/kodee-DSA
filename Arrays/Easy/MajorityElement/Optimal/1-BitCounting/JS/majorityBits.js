function majorityElement(shelf) {
    const half = Math.floor(shelf.length / 2);
    let answer = 0;
    for (let bit = 0; bit < 32; bit++) {
        let ones = 0;
        for (const volume of shelf) {
            if (((volume >> bit) & 1) === 1) {
                ones++;
            }
        }
        if (ones > half) {
            answer = answer | (1 << bit);
        }
    }
    return answer;
}

const shelf = [3, 7, 7, 5, 7];
console.log("Majority: " + majorityElement(shelf));
