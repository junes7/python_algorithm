#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, total, *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    printf("%s", total % 3 == 0 ? "yes" : "no");
    return 0;
}