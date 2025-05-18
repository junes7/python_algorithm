#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* TenToTwo(char* st) {
    int len, idx = 0, num = atoi(st);
    char* rlt = (char*)malloc(sizeof(char) * 7);
    char* ans = (char*)malloc(sizeof(char) * 7);
    memset(rlt, 0, sizeof(char) * 7);
    while (num > 0) {
        rlt[idx++] = (num % 2) + 48;
        num /= 2;
    }
    len = strlen(rlt);
    for (int i = len; i < 6; i++)
        rlt[idx++] = '0';
    for (int i = 0; i < 6; i++)
        ans[i] = rlt[6 - 1 - i];
    return ans;
}
int main(void) {
    int n, idx;
    scanf("%d", &n);
    char *temp, *st = (char*)malloc(sizeof(char) * 9);
    char* row = (char*)malloc(sizeof(char) * 19);
    char* col = (char*)malloc(sizeof(char) * 19);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        temp = strtok(st, ":");
        char t[3][7];
        idx = 0;
        memset(row, 0, sizeof(char) * 19);
        memset(col, 0, sizeof(char) * 19);
        while (temp != NULL) {
            strcpy(t[idx++], TenToTwo(temp));
            temp = strtok(NULL, ":");
        }
        idx = 0;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                col[idx++] = t[j][i];
            }
        }
        strcat(row, t[0]);
        strcat(row, t[1]);
        strcat(row, t[2]);
        printf("%s %s\n", col, row);
    }
    return 0;
}