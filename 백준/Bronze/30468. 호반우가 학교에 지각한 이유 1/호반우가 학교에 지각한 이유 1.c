#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, s = 0, *arr = (int*)malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    scanf("%d", &n);
    printf("%d", s >= n * 4 ? 0 : (n * 4) - s);
    return 0;
}