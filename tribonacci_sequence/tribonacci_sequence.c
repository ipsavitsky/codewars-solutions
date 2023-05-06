#include <stdlib.h>
#include <string.h>

typedef unsigned long ulong;

long long *tribonacci(const long long signature[3], size_t n) {
    if (0 == n) {
        return NULL;
    }
    long long *sequence = (long long *)malloc(sizeof(long long) * n);
    memcpy(sequence, signature, sizeof(long long) * (n > 3 ? 3 : n));
    for (ulong i = 3; i < n; ++i) {
        sequence[i] = sequence[i - 1] + sequence[i - 2] + sequence[i - 3];
    }
    return sequence;
}