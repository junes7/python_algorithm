#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int maxn = 0, s = 0, *arr = (int*)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        if (maxn < arr[i])
            maxn = arr[i];
    }
    for (int i = 0; i < 3; i++)
        s += maxn - arr[i];
    printf("%d", s);
    return 0;
}