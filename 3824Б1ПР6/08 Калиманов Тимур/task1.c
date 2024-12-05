#include <stdio.h>
#include <limits.h>  
int sum_of_two_numbers(int a, int b)
{
    long long sum = (long long)a + b; 

    if (sum > INT_MAX) {
        return INT_MAX; 
    }
    if (sum < INT_MIN) {
        return INT_MIN; 
    }
    return (int)sum;
}
