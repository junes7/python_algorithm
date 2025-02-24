#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, idxl = 0, idxr = 0, idx = 0;
    char *left_stack = (char *)malloc(sizeof(char) * 600001);
    char *right_stack = (char *)malloc(sizeof(char) * 600001);
    char *rlt = (char *)malloc(sizeof(char) * 600001);
    scanf("%s", left_stack);
    idxl = strlen(left_stack);
    scanf("%d", &n);
    char cmd[4];
    for (int i = 0; i < n + 1; i++) {
        gets(cmd);
        if (cmd[0] == 'L') {
            if (idxl > 0)
                right_stack[idxr++] = left_stack[idxl-- - 1];
        } else if (cmd[0] == 'D') {
            if (idxr > 0)
                left_stack[idxl++] = right_stack[idxr-- - 1];
        } else if (cmd[0] == 'B') {
            if (idxl > 0)
                idxl--;
        } else if (cmd[0] == 'P') {
            left_stack[idxl++] = cmd[2];
        }
    }
    for (int i = 0; i < idxl; i++)
        rlt[idx++] = left_stack[i];
    for (int i = idxr - 1; i >= 0; i--)
        rlt[idx++] = right_stack[i];
    rlt[idx] = '\0';
    printf("%s", rlt);
    return 0;
}