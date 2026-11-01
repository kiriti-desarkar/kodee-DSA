def intersect_brute(shelf_a, shelf_b):
    taken = [False] * len(shelf_b)
    common = []
    for book in shelf_a:
        for spot_b in range(len(shelf_b)):
            if not taken[spot_b] and shelf_b[spot_b] == book:
                taken[spot_b] = True
                common.append(book)
                break
    return common


shelf_a = [1, 2, 2, 4]
shelf_b = [2, 4, 4, 5]
common = intersect_brute(shelf_a, shelf_b)
print("Intersection: " + str(common))
