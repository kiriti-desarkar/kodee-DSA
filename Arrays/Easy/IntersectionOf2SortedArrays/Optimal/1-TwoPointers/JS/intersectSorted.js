function intersectSorted(shelfA, shelfB) {
    const common = [];
    let spotA = 0;
    let spotB = 0;
    while (spotA < shelfA.length && spotB < shelfB.length) {
        if (shelfA[spotA] < shelfB[spotB]) {
            spotA++;
        } else if (shelfA[spotA] > shelfB[spotB]) {
            spotB++;
        } else {
            common.push(shelfA[spotA]);
            spotA++;
            spotB++;
        }
    }
    return common;
}

const shelfA = [1, 2, 2, 4];
const shelfB = [2, 4, 4, 5];
const common = intersectSorted(shelfA, shelfB);
console.log("Intersection: [" + common.join(", ") + "]");
