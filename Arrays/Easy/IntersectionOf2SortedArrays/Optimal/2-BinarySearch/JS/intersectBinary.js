function lowerBound(shelf, value, fromSpot) {
    let low = fromSpot;
    let high = shelf.length;
    while (low < high) {
        const middle = low + Math.floor((high - low) / 2);
        if (shelf[middle] < value) {
            low = middle + 1;
        } else {
            high = middle;
        }
    }
    return low;
}

function intersectBinary(shelfA, shelfB) {
    const common = [];
    let fromSpot = 0;
    for (const book of shelfA) {
        const found = lowerBound(shelfB, book, fromSpot);
        if (found < shelfB.length && shelfB[found] === book) {
            common.push(book);
            fromSpot = found + 1;
        }
    }
    return common;
}

const shelfA = [1, 2, 2, 4];
const shelfB = [2, 4, 4, 5];
const common = intersectBinary(shelfA, shelfB);
console.log("Intersection: [" + common.join(", ") + "]");
