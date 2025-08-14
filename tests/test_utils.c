#include <assert.h>
#include "../include/utils.h"

int main(void) {
    // Test add()
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);

    // Test average()
    int arr[] = {1, 2, 3};
    assert(average(arr, 3) == 2.0);

    int empty[1] = {0};
    assert(average(empty, 0) == 0.0);

    return 0;
}
