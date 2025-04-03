#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, m, len, cnt;
    bool flag = true;
    scanf("%d %d", &n, &m);
    char *temp, *st, **arr = (char **)malloc(sizeof(char *) * n);
    st = (char *)malloc(sizeof(char) * m * 2);
    gets(st);
    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(sizeof(char) * m);
        cnt = 0;
        gets(st);
        len = strlen(st);
        for (int j = 0; j < len; j++) {
            if (st[j] == 'A')
                cnt += 1;
        }
        if (cnt != 1) {
            flag = false;
            break;
        }
    }
    printf("%s", flag ? "Yes" : "No");
    return 0;
}