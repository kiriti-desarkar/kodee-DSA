def majority_element(shelf):
    size = len(shelf)
    copies_of = {}
    for volume in shelf:
        copies = copies_of.get(volume, 0) + 1
        copies_of[volume] = copies
        if copies > size // 2:
            return volume
    return -1


shelf = [3, 7, 7, 5, 7]
print("Majority:", majority_element(shelf))
