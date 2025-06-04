#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* TwoToTen(char* num) {
    int n = 0, m = 1, len = strlen(num);
    char* stn = (char*)malloc(sizeof(char) * 2);
    for (int i = len - 1; i >= 0; i--) {
        n += (num[i] - 48) * m;
        m *= 2;
    }
    sprintf(stn, "%d", n);
    return stn;
}
int main(void) {
    int len;
    char* st = (char*)malloc(sizeof(char) * 101);
    char* t = (char*)malloc(sizeof(char) * 101);
    char* rlt = (char*)malloc(sizeof(char) * 34);
    memset(rlt, 0, sizeof(char) * 34);
    scanf("%s", st);
    while (strlen(st) % 3) {
        strcpy(t, "0");
        strcat(t, st);
        strcpy(st, t);
    }
    len = strlen(st);
    memset(t, 0, sizeof(char) * 101);
    for (int i = 0; i < len / 3; i++) {
        strncpy(t, st + 3 * i, 3);
        strcat(rlt, TwoToTen(t));
    }
    printf("%s\n", rlt);
    return 0;
}