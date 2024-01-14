#include <stdio.h>
#include <stdlib.h>
//Array as an ADT

typedef struct Array {
    int *arr;
    int size;
    int lenght;
} array;

int display(struct Array arr, int idx);

int main()
{
    int size = 10;
    int lenght = 6;
    array arr;
    arr.size = size;
    arr.lenght = lenght;
    arr.arr = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < lenght; i++) {
        arr.arr[i] = i*i;
    }
    display(arr, 5);
    display(arr, 6);

    return 0;
}

int display(struct Array arr, int idx) {

    if (idx >= arr.lenght | idx < 0) {
        printf("Invalid location.\n");
        return -1;
    }

    printf("%dth element is %d.\n", idx, arr.arr[idx]);
    return 0;
}