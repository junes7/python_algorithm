#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int s = 0, *arr = (int*)malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    for (int i = 0; i < 10; i++) {
        if (s - arr[i] == arr[i]) {
            printf("%d", arr[i]);
            break;
        }
    }
    return 0;
}