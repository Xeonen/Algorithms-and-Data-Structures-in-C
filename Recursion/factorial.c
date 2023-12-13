#include <stdio.h>

int fun(int n) {
    if (n==1)
        return n;   
    return fun(n-1)*n;
}

int main() {

    int n = 4;
    printf("%d", fun(n));
    return 0;
}