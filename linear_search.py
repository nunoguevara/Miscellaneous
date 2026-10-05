def find_index(a, b):
    for i in range(len(a)):
        if a[i] == b:
            return i
    return None

list = [8, 9, 10, 13, 15, 1]

print(find_index(list, 8))

