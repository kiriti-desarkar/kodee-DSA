function intersectBrute(shelfA, shelfB) {
    const sizeB = shelfB.length;
    const taken = new Array(sizeB).fill(false);
    const common = [];
    for (const book of shelfA) {
        for (let spotB = 0; spotB < sizeB; spotB++) {
            if (!taken[spotB] && shelfB[spotB] === book) {
                taken[spotB] = true;
                common.push(book);
                break;
            }
        }
    }
    return common;
}

const shelfA = [1, 2, 2, 4];
const shelfB = [2, 4, 4, 5];
const common = intersectBrute(shelfA, shelfB);
console.log("Intersection: [" + common.join(", ") + "]");
