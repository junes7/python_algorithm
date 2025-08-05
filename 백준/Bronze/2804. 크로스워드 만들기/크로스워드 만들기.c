#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int l1, l2, idx[2];
    char *wr1 = (char *)malloc(sizeof(char) * 31);
    char *wr2 = (char *)malloc(sizeof(char) * 31);
    bool flag = false;
    scanf("%s %s", wr1, wr2);
    l1 = strlen(wr1), l2 = strlen(wr2);
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < l2; j++) {
            if (wr2[j] == wr1[i]) {
                flag = true;
                idx[0] = i;
                idx[1] = j;
                break;
            }
        }
        if (flag) break;
    }
    char **rlt = (char **)malloc(sizeof(char *) * l2);
    for (int i = 0; i < l2; i++) {
        rlt[i] = (char *)malloc(sizeof(char) * (l1 + 1));
        for (int j = 0; j < l1; j++) {
            rlt[i][j] = '.';
        }
    }
    for (int i = 0; i < l2; i++)
        rlt[i][idx[0]] = wr2[i];
    for (int i = 0; i < l1; i++)
        rlt[idx[1]][i] = wr1[i];
    for (int i = 0; i < l2; i++) {
        for (int j = 0; j < l1; j++)
            printf("%c", rlt[i][j]);
        printf("\n");
    }
    return 0;
}