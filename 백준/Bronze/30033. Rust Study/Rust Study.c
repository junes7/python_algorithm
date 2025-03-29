#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, cnt = 0, *a, *b;
    scanf("%d", &n);
    a = (int*)malloc(sizeof(int) * n);
    b = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    for (int i = 0; i < n; i++) {
        if (a[i] <= b[i])
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}