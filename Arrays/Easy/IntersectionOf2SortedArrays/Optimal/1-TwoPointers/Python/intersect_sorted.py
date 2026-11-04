def intersect_sorted(shelf_a, shelf_b):
    common = []
    spot_a = 0
    spot_b = 0
    while spot_a < len(shelf_a) and spot_b < len(shelf_b):
        if shelf_a[spot_a] < shelf_b[spot_b]:
            spot_a += 1
        elif shelf_a[spot_a] > shelf_b[spot_b]:
            spot_b += 1
        else:
            common.append(shelf_a[spot_a])
            spot_a += 1
            spot_b += 1
    return common


shelf_a = [1, 2, 2, 4]
shelf_b = [2, 4, 4, 5]
common = intersect_sorted(shelf_a, shelf_b)
print("Intersection: " + str(common))
