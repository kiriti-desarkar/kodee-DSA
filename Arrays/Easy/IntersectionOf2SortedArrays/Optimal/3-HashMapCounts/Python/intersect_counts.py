from collections import Counter


def intersect_counts(shelf_a, shelf_b):
    if len(shelf_a) <= len(shelf_b):
        small_shelf = shelf_a
        big_shelf = shelf_b
    else:
        small_shelf = shelf_b
        big_shelf = shelf_a
    counts = Counter()
    for book in small_shelf:
        counts[book] += 1
    common = []
    for book in big_shelf:
        if counts[book] > 0:
            common.append(book)
            counts[book] -= 1
    return common


def intersect_small_values(shelf_a, shelf_b):
    counts = [0] * 1001
    for book in shelf_a:
        counts[book] += 1
    common = []
    for book in shelf_b:
        if counts[book] > 0:
            common.append(book)
            counts[book] -= 1
    return common


shelf_a = [1, 2, 2, 4]
shelf_b = [2, 4, 4, 5]
common = intersect_counts(shelf_a, shelf_b)
print("Intersection: " + str(common))
common_small = intersect_small_values(shelf_a, shelf_b)
print("Intersection: " + str(common_small))
