/**
 * @file head_recursion.c
 * @brief This file contains an example of head recursion in C.
 * 
 * Head recursion is a type of recursion where the recursive call is made before any other statements in the function.
 * In this example, the function head_recursion() is called recursively with a decreasing value of 'n' until 'n' becomes 0.
 * Then, the function prints the value of 'n' in reverse order.
 * 
 * @param n The input integer value.
 * @return None.
 */

#include <stdio.h>

void head_recursion(int n)
{
    if (n > 0)
    {
        head_recursion(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    int x = 3;
    head_recursion(x);
    return 0;
}