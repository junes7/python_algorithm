#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int idx = 0, len = 0, t;
    char *ph1 = (char *)malloc(sizeof(char) * 9);
    char *ph2 = (char *)malloc(sizeof(char) * 9);
    char *rlt = (char *)malloc(sizeof(char) * 17);
    char *tmp1 = (char *)malloc(sizeof(char) * 17);
    char *tmp2 = (char *)malloc(sizeof(char) * 17);
    memset(tmp2, 0, sizeof(char) * 17);
    scanf("%s %s", ph1, ph2);
    for (int i = 0; i < 8; i++) {
        rlt[idx++] = ph1[i];
        rlt[idx++] = ph2[i];
    }
    rlt[idx] = '\0';
    len = strlen(rlt);
    while (len != 2) {
        for (int i = 0; i < len - 1; i++) {
            t = ((rlt[i] - 48) + (rlt[i + 1] - 48)) % 10;
            sprintf(tmp1, "%d", t);
            strcat(tmp2, tmp1);
        }
        strcpy(rlt, tmp2);
        len = strlen(rlt);
        memset(tmp2, 0, sizeof(char) * 17);
    }
    printf("%s", rlt);
    return 0;
}