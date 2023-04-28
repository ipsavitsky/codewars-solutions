from math import sqrt

def is_square(n: int) -> bool:
    if n < 0:
        return False
    sq = sqrt(n)    
    return abs(sq - int(sq)) < 1e-7