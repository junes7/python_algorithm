#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 6);
    char *t = (char *)malloc(sizeof(char) * 3);
    char *num = (char *)malloc(sizeof(char) * 4);
    char *d = (char *)malloc(sizeof(char) * 6);
    int s;
    while (1) {
        scanf("%s", st);
        s = 0;
        if (strcmp(st, "99999") == 0) break;
        strncpy(t, st, 2);
        strncpy(num, st + 2, 3);
        t[2] = '\0', num[3] = '\0';
        for (int i = 0; i < 2; i++)
            s += t[i] - 48;
        if (s != 0)
            strcpy(d, s % 2 == 0 ? "right" : "left");
        printf("%s %s\n", d, num);
    }
    return 0;
}