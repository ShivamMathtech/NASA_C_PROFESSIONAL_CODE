#include <stdio.h>

int global_var = 42;       // Goes into .data section
int uninitialized_var;     // Goes into .bss section

int main() {
    int local_var = 10;    // Stored in stack at runtime
    printf("Hello NASA! %d %d\n", global_var, local_var);
    return 0;
}
