def lower_bound(shelf, value, from_spot):
    low = from_spot
    high = len(shelf)
    while low < high:
        middle = low + (high - low) // 2
        if shelf[middle] < value:
            low = middle + 1
        else:
            high = middle
    return low


def intersect_binary(shelf_a, shelf_b):
    common = []
    from_spot = 0
    for book in shelf_a:
        found = lower_bound(shelf_b, book, from_spot)
        if found < len(shelf_b) and shelf_b[found] == book:
            common.append(book)
            from_spot = found + 1
    return common


shelf_a = [1, 2, 2, 4]
shelf_b = [2, 4, 4, 5]
common = intersect_binary(shelf_a, shelf_b)
print("Intersection: " + str(common))
