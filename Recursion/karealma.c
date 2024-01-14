#include <stdio.h>
#include <stdlib.h>
// n times k
int mul(int n, int k) {
    if  (n == 0)
        return 0;
    return mul(n-1, k) + k;
}

int binary(int arr[], int l, int n) {
    int max = l -1;
    int min = 0;
    int mid = (max + min) / 2;
    while (max >= min) {
        printf("%d", mid);
        printf("%d", arr[mid]);
        if (arr[mid] == n) {
            return mid;
        } else if (arr[mid] < n) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
        mid = (max+min) / 2;
    }
    return -1;
}


int main() {
    int A[10] = {1,2,3,5,6,16,17,18, 19, 20};
    printf("%d", binary(A, 10, -2));



}
