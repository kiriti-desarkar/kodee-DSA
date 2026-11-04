function majorityElement(shelf) {
    let candidate = 0;
    let votes = 0;
    for (const volume of shelf) {
        if (votes === 0) {
            candidate = volume;
        }
        if (volume === candidate) {
            votes++;
        } else {
            votes--;
        }
    }
    return candidate;
}

function majorityOrNone(shelf) {
    const half = Math.floor(shelf.length / 2);
    const candidate = majorityElement(shelf);
    // ADDED: the verify pass
    const count = shelf
        .filter((volume) => volume === candidate)
        .length;
    if (count > half) {
        return candidate;
    }
    return -1;
}

const shelf = [3, 7, 7, 5, 7];
console.log("Majority: " + majorityElement(shelf));
