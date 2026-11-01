function intersectOnDisk(smallShelf, bigShelfChunks) {
    const counts = {};
    for (const book of smallShelf) {
        counts[book] = (counts[book] || 0) + 1;
    }
    const common = [];
    for (const chunk of bigShelfChunks) {
        for (const book of chunk) {
            if (counts[book] > 0) {
                common.push(book);
                counts[book] -= 1;
            }
        }
    }
    return common;
}

const smallShelf = [1, 2, 2, 4];
const bigShelfChunks = [[2, 4], [4, 5]];
const common = intersectOnDisk(smallShelf, bigShelfChunks);
console.log("Intersection: [" + common.join(", ") + "]");
