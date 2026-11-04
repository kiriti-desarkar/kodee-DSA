function majorityElement(shelf) {
    const size = shelf.length;
    const half = Math.floor(size / 2);
    for (const volume of shelf) {
        let copies = 0;
        for (const book of shelf) {
            if (book === volume) {
                copies++;
            }
        }
        if (copies > half) {
            return volume;
        }
    }
    return -1;
}

const shelf = [3, 7, 7, 5, 7];
console.log("Majority: " + majorityElement(shelf));
