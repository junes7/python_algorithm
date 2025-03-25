#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    char* st = (char*)malloc(sizeof(char) * 101);
    scanf("%d", &n);
    scanf("%s", st);
    len = strlen(st);
    if (st[len - 1] == 'G') {
        st[len - 1] = '\0';
    } else {
        st[len] = 'G';
        st[len + 1] = '\0';
    }
    printf("%s", st);
    return 0;
}