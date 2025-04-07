#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, x, y;
    char **arr;
    scanf("%d", &n);
    arr = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(sizeof(char) * 101);
        scanf("%s", arr[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &x, &y);
        for (int j = x - 1; j < y; j++)
            printf("%s\n", arr[j]);
    }
    return 0;
}