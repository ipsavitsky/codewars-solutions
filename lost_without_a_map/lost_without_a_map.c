#include <stddef.h>
#include <stdlib.h>

int *maps(const int *arr, size_t size) {
    int *res = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; ++i) {
        res[i] = arr[i] * 2;
    }
    return res;
}