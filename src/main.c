#include "main.h"
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv) {
    clock_t start_clock, end_clock;

    int32_t result = fib46();

    end_clock = clock();

    printf("%d\n", result);
    printf("%f ms\n", ((double)(end_clock - start_clock) / CLOCKS_PER_SEC)*1000.);
    return 0;
}