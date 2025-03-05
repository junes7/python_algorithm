#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int s = 0, *arr = (int*)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    printf("%d", s);
    return 0;
}