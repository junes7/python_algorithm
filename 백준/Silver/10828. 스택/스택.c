#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, num, idx = 0;
    scanf("%d", &n);
    char *cmd = (char *)malloc(sizeof(char) * 6);
    int *stk = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%s", cmd);
        if (strcmp(cmd, "push") == 0) {
            scanf("%d", &num);
            stk[idx++] = num;
        } else if (strcmp(cmd, "pop") == 0) {
            printf("%d\n", idx == 0 ? -1 : stk[idx-- - 1]);
        } else if (strcmp(cmd, "size") == 0) {
            printf("%d\n", idx);
        } else if (strcmp(cmd, "empty") == 0) {
            printf("%d\n", idx == 0 ? 1 : 0);
        } else if (strcmp(cmd, "top") == 0) {
            printf("%d\n", idx == 0 ? -1 : stk[idx - 1]);
        }
    }
    return 0;
}