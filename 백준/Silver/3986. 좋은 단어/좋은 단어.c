#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, cnt = 0, idx;
    char *st = (char *)malloc(sizeof(char) * 100001);
    char *stack = (char *)malloc(sizeof(char) * 100001);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        len = strlen(st), idx = 0;
        memset(stack, 0, sizeof(char) * 100001);
        for (int j = 0; j < len; j++) {
            if (idx && stack[idx - 1] == st[j])
                idx--;
            else
                stack[idx++] = st[j];
        }
        if (!idx)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}