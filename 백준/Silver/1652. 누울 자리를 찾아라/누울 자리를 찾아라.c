#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len_r, len_c;
    scanf("%d", &n);
    char **arr = (char **)malloc(sizeof(char *) * n);
    int *maxn = (int *)malloc(sizeof(int) * 2);
    memset(maxn, 0, sizeof(int) * 2);
    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(sizeof(char) * (n + 1));
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < n; i++) {
        len_r = 0, len_c = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == '.')
                len_r += 1;
            else
                len_r = 0;
            if (len_r == 2)
                maxn[0] += 1;
            if (arr[j][i] == '.')
                len_c += 1;
            else
                len_c = 0;
            if (len_c == 2)
                maxn[1] += 1;
        }
    }
    for (int i = 0; i < 2; i++)
        printf("%d ", maxn[i]);
    return 0;
}