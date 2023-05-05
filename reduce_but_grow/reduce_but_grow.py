"""https://www.codewars.com/kata/57f780909f7e8e3183000078"""
from functools import reduce

def grow(arr):
    return reduce(lambda product, current: product * current, arr)