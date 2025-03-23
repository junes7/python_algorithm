#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, n;
    char* st = (char*)malloc(sizeof(char) * 101);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        len = strlen(st);
        for (int j = 0; j < len; j++) {
            if (st[j] == 'S') {
                printf("%s", st);
                break;
            }
        }
    }
    return 0;
}