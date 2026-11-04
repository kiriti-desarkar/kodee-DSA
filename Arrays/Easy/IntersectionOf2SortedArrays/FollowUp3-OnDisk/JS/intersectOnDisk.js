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

const smallShelf = [4, 2, 1, 2];
const bigShelfChunks = [[5, 2], [4, 4]];
const common = intersectOnDisk(smallShelf, bigShelfChunks);
console.log("Intersection: [" + common.join(", ") + "]");
