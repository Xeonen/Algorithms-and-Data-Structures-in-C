/**
 * Calculates the result of nested recursion.
 *
 * The nested_recursion function takes an integer n as input and performs nested recursion.
 * If n is greater than 100, it subtracts 10 from n and returns the result.
 * Otherwise, it performs nested recursion by calling itself with the result of nested_recursion(n + 11).
 *
 * @param n The input integer.
 * @return The result of nested recursion.
 */
#include <stdio.h>

int nested_recursion(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {
        return nested_recursion(nested_recursion(n + 11));
    }
}

int main()
{
    int x = 95;
    printf("%d", nested_recursion(x));
    return 0;
}