#include <stdio.h>

/**
 * Recursive function that demonstrates tree recursion.
 * Prints the value of n and recursively calls itself twice with n-1.
 * Time complexity: O(2^n)
 *
 * @param n The input value.
 */
void tree_recursion(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        tree_recursion(n - 1);
        tree_recursion(n - 1);
    }
}

int main()
{
    int x = 3;
    tree_recursion(x);
    return 0;
}