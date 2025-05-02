#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    char* st = (char*)malloc(sizeof(char) * 51);
    scanf("%d", &n);
    char** arr = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (char*)malloc(sizeof(char) * 51);
        scanf("%s", arr[i]);
    }
    strcpy(st, arr[0]);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        for (int j = 1; j < n; j++) {
            if (st[i] != arr[j][i])
                st[i] = '?';
        }
    }
    printf("%s", st);
    return 0;
}