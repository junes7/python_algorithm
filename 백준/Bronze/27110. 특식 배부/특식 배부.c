#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, s = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        s += arr[i] > n ? n : arr[i];
    }
    printf("%d", s);
    return 0;
}