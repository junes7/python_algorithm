#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, leaves, idx, *line;
    char *temp, *st = (char *)malloc(sizeof(char) * 90);
    line = (int *)malloc(sizeof(int) * 40);
    while (gets(st)) {
        if (st[0] == '0') break;
        memset(line, 0, sizeof(int) * 40);
        leaves = 1, idx = 0;
        temp = strtok(st, " ");
        while (temp != NULL) {
            line[idx++] = atoi(temp);
            temp = strtok(NULL, " ");
        }
        for (int i = 1; i < idx; i = i + 2)
            leaves = leaves * line[i] - line[i + 1];
        printf("%d\n", leaves);
    }
    return 0;
}