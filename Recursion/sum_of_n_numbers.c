/**
 * @file sum_of_n_numbers.c
 * @brief Calculates the sum of n numbers using recursion.
 */

#include <stdio.h>

/**
 * @brief Recursive function to calculate the sum of n numbers.
 * @param n The number of elements to sum.
 * @return The sum of n numbers.
 */
int fun(int n) {
    if (n == 0) {
        return 0;
    } else {
        return fun(n-1)+n;
    }
}


int main() {
    int n = 5;
    printf("%d", fun(5));
    return 0;
}