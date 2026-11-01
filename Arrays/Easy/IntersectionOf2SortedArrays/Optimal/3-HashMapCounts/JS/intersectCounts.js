function intersectCounts(shelfA, shelfB) {
    let smallShelf;
    let bigShelf;
    if (shelfA.length <= shelfB.length) {
        smallShelf = shelfA;
        bigShelf = shelfB;
    } else {
        smallShelf = shelfB;
        bigShelf = shelfA;
    }
    const counts = {};
    for (const book of smallShelf) {
        counts[book] = (counts[book] || 0) + 1;
    }
    const common = [];
    for (const book of bigShelf) {
        if (counts[book] > 0) {
            common.push(book);
            counts[book] -= 1;
        }
    }
    return common;
}

function intersectSmallValues(shelfA, shelfB) {
    const counts = new Array(1001).fill(0);
    for (const book of shelfA) {
        counts[book] += 1;
    }
    const common = [];
    for (const book of shelfB) {
        if (counts[book] > 0) {
            common.push(book);
            counts[book] -= 1;
        }
    }
    return common;
}

const shelfA = [1, 2, 2, 4];
const shelfB = [2, 4, 4, 5];
const common = intersectCounts(shelfA, shelfB);
console.log("Intersection: [" + common.join(", ") + "]");
const commonSmall = intersectSmallValues(shelfA, shelfB);
console.log("Intersection: [" + commonSmall.join(", ") + "]");
