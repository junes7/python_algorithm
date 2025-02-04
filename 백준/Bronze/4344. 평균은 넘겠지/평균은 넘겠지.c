#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int c, n, avg, s, *arr = (int*)malloc(sizeof(int) * 1000);
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        scanf("%d", &n);
        s = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            s += arr[i];
        }
        avg = s / n;
        s = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > avg)
                s += 1;
        }
        printf("%.3f%%\n", (double)s * 100 / n);
    }
    return 0;
}