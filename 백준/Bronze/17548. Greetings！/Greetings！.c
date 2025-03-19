#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, idx = 0;
    char* st = (char*)malloc(sizeof(char) * 1001);
    char* t = (char*)malloc(sizeof(char) * 2001);
    scanf("%s", st);
    len = strlen(st);
    t[idx++] = st[0];
    for (int i = 0; i < (len - 2) * 2; i++) {
        t[idx++] = st[1];
    }
    t[idx++] = st[len - 1];
    t[idx] = '\0';
    printf("%s", t);
    return 0;
}