from itertools import accumulate

def count_by(x, n):
    return list(accumulate(x for _ in range(n)))
