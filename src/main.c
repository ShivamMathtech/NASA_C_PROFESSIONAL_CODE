#include <stdio.h>
#include "utils.h"

int main(void) {
    int nums[] = {10, 20, 30};
    size_t size = sizeof(nums) / sizeof(nums[0]);

    printf("Sum: %d\n", add(5, 7));
    printf("Average: %.2f\n", average(nums, size));

    return 0;
}
