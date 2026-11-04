def majority_element(shelf):
    candidate = 0
    votes = 0
    for volume in shelf:
        if votes == 0:
            candidate = volume
        if volume == candidate:
            votes += 1
        else:
            votes -= 1
    return candidate


def majority_or_none(shelf):
    size = len(shelf)
    candidate = majority_element(shelf)
    # ADDED: the verify pass
    count = shelf.count(candidate)
    if count > size // 2:
        return candidate
    return -1


shelf = [3, 7, 7, 5, 7]
print("Majority:", majority_element(shelf))
