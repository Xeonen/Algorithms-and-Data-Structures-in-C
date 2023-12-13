/**
 * @file tail_recursion.c
 * @brief This file contains an example of tail recursion in C.
 * 
 * The tail_recursion function recursively prints the numbers from n to 1.
 * It demonstrates the concept of tail recursion, where the recursive call
 * is the last operation in the function.
 * 
 * @param n The number to start the recursion from.
 */

#include <stdio.h>

void tail_recursion(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        tail_recursion(n - 1);
    }
}

int main()
{
    int x = 3;
    tail_recursion(x);
    return 0;
}