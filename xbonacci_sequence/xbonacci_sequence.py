from itertools import chain, islice


def xbon(signature):
    while True:
        k = sum(signature)
        for i in range(len(signature) - 1):
            signature[i] = signature[i + 1]
        signature[-1] = k
        yield k


def Xbonacci(signature, n):
    xbon_gen = xbon(signature)
    return list(islice(chain(signature, xbon_gen), n))
