def majority_element(shelf):
    size = len(shelf)
    for volume in shelf:
        copies = 0
        for book in shelf:
            if book == volume:
                copies += 1
        if copies > size // 2:
            return volume
    return -1


shelf = [3, 7, 7, 5, 7]
print("Majority:", majority_element(shelf))
