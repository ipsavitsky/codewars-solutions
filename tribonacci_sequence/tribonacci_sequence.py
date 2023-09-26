from itertools import chain, islice

def trib(signature):
    while True:
        k = sum(signature)
        signature[0] = signature[1]
        signature[1] = signature[2]
        signature[2] = k
        yield k


def tribonacci(signature, n):
    trib_gen = trib(signature)
    return list(islice(chain(signature, trib_gen), n))
