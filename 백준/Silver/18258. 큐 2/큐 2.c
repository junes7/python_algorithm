#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, num, idx = 0, frt = 0;
    scanf("%d", &n);
    int *que = (int *)malloc(sizeof(int) * 2000000);
    char *cmd = (char *)malloc(sizeof(char) * 6);
    for (int i = 0; i < n; i++) {
        scanf("%s", cmd);
        if (strcmp(cmd, "push") == 0) {
            scanf("%d", &num);
            que[idx++] = num;
        } else if (strcmp(cmd, "pop") == 0) {
            if (idx - frt == 0)
                printf("%d\n", -1);
            else {
                printf("%d\n", que[frt]);
                frt++;
            }
        } else if (strcmp(cmd, "size") == 0) {
            printf("%d\n", idx - frt);
        } else if (strcmp(cmd, "empty") == 0) {
            printf("%d\n", idx - frt == 0 ? 1 : 0);
        } else if (strcmp(cmd, "front") == 0) {
            printf("%d\n", idx - frt == 0 ? -1 : que[frt]);
        } else if (strcmp(cmd, "back") == 0) {
            printf("%d\n", idx - frt == 0 ? -1 : que[idx - 1]);
        }
    }
    return 0;
}