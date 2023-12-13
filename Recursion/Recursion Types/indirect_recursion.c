/**
 * @file indirect_recursion.c
 * @brief This file contains the implementation of indirect recursion.
 * 
 * Indirect recursion is a type of recursion where multiple functions call each other in a circular manner.
 * This file demonstrates an example of indirect recursion using three functions: indirect_recursion_a, indirect_recursion_b, and indirect_recursion_c.
 * The main function calls indirect_recursion_a to start the recursion.
 */

#include <stdio.h>

void indirect_recursion_a(int n);
void indirect_recursion_b(int n);
void indirect_recursion_c(int n);

int main()
{
    int x = 20;
    indirect_recursion_a(x);
    return 0;
}

void indirect_recursion_a(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        indirect_recursion_b(n - 1);
    }
}

void indirect_recursion_b(int n)
{
    if (n > 1)
    {
        printf("%d ", n);
        indirect_recursion_c(n / 2);
    }
}  

void indirect_recursion_c(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        indirect_recursion_a(n - 1);
    }
}