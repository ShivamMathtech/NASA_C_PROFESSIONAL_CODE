#include "utils.h"
#include <assert.h> // For input validation

int add(int a, int b) {
    return a + b;
}

double average(const int *arr, size_t size) {
    assert(arr != NULL && "Null pointer passed to average()");
    if (size == 0) return 0.0;

    long sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double) sum / size;
}
