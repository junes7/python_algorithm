#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 129);
    char *tmp = (char *)malloc(sizeof(char) * 3);
    char *rlt = (char *)malloc(sizeof(char) * 257);
    memset(rlt, 0, sizeof(char) * 257);
    int len, t;
    gets(st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        if (isupper(st[i])) {
            t = st[i] - 38;
            if (t < 10)
                strcat(rlt, "0");
            sprintf(tmp, "%d", t);
            strcat(rlt, tmp);
        } else if (islower(st[i])) {
            t = st[i] - 96;
            if (t < 10)
                strcat(rlt, "0");
            sprintf(tmp, "%d", t);
            strcat(rlt, tmp);
        } else if (isdigit(st[i])) {
            t = st[i] - 48;
            strcat(rlt, "#");
            sprintf(tmp, "%d", t);
            strcat(rlt, tmp);
        } else {
            sprintf(tmp, "%c", st[i]);
            strcat(rlt, tmp);
        }
    }
    printf("%s", rlt);
    return 0;
}