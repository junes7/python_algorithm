#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int s = 0, minn = 100, *arr = (int*)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        s += arr[i];
        if (minn > arr[i])
            minn = arr[i];
    }
    printf("%d", s - minn);
    return 0;
}