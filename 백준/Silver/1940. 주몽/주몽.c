#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, cnt = 0, *arr;
    scanf("%d", &n);
    scanf("%d", &m);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == m)
                cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}