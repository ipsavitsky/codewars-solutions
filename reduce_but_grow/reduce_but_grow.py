from functools import reduce

def grow(arr):
    return reduce(lambda product, current: product * current, arr)
