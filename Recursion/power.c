/**
 * @file power.c
 * @brief This file contains a recursive function to calculate the power of a number.
 */

#include <stdio.h>

/**
 * @brief Calculates the power of a number using recursion.
 * @param m The base number.
 * @param n The exponent.
 * @return The result of m raised to the power of n.
 */
int fun(int m, int n) {
    if (n == 1)
        return m;
    return fun(m, n-1)*m;
}

int main() {
    int m, n;
    m = 2, n = 5;
    printf("%d", fun(m, n));
    return 0;
}