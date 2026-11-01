from collections import Counter


def intersect_on_disk(small_shelf, big_shelf_chunks):
    counts = Counter()
    for book in small_shelf:
        counts[book] += 1
    common = []
    for chunk in big_shelf_chunks:
        for book in chunk:
            if counts[book] > 0:
                common.append(book)
                counts[book] -= 1
    return common


small_shelf = [1, 2, 2, 4]
big_shelf_chunks = [[2, 4], [4, 5]]
common = intersect_on_disk(small_shelf, big_shelf_chunks)
print("Intersection: " + str(common))
