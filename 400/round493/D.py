from itertools import combinations

def balls_in_boxes(n, m):
    """Generate combinations of n balls in m boxes.

    >>> list(balls_in_boxes(4, 2))
    [(0, 4), (1, 3), (2, 2), (3, 1), (4, 0)]
    >>> list(balls_in_boxes(3, 3))
    [(0, 0, 3), (0, 1, 2), (0, 2, 1), (0, 3, 0), (1, 0, 2), (1, 1, 1), (1, 2, 0), (2, 0, 1), (2, 1, 0), (3, 0, 0)]

    """
    for c in combinations(range(n + m - 1), m - 1):
        yield tuple(b - a - 1 for a, b in zip((-1,) + c, c + (n + m - 1,)))

b = []

for j in range(1,30):
    a = {}
    for i in balls_in_boxes(j,4):
        temp = i[0] + 5*i[1] + 10*i[2] + 50*i[3]
        if temp not in a:
            a[temp] = [i]
        else:
            a[temp].append(i)

    b.append(len(a))

print(b)
