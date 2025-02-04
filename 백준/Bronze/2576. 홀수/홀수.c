#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int s = 0, minn = 100, *arr = (int*)malloc(sizeof(int) * 7);
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 1) {
            s += arr[i];
            if (minn > arr[i])
                minn = arr[i];
        }
    }
    if (s == 0)
        printf("%d", -1);
    else
        printf("%d\n%d", s, minn);
    return 0;
}