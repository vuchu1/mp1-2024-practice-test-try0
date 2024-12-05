#include <stdio.h>
#include <limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0) {
        return 0;
    }
    if (a > UINT_MAX / b) {
        return UINT_MAX;
    }
    return a * b;
}
