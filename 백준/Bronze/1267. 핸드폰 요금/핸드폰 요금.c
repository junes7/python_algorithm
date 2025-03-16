#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, sy = 0, sm = 0, *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sy += (arr[i] / 30 + 1) * 10;
        sm += (arr[i] / 60 + 1) * 15;
    }
    if (sy == sm)
        printf("%c %c %d", 'Y', 'M', sy);
    else if (sy < sm)
        printf("%c %d", 'Y', sy);
    else
        printf("%c %d", 'M', sm);
    return 0;
}