function majorityElement(shelf) {
    const half = Math.floor(shelf.length / 2);
    const copiesOf = new Map();
    for (const volume of shelf) {
        const copies = (copiesOf.get(volume) || 0) + 1;
        copiesOf.set(volume, copies);
        if (copies > half) {
            return volume;
        }
    }
    return -1;
}

const shelf = [3, 7, 7, 5, 7];
console.log("Majority: " + majorityElement(shelf));
