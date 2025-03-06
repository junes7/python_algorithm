#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int s = 0, *arr = (int*)malloc(sizeof(int) * 6);
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    printf("%d", s * 5);
    return 0;
}