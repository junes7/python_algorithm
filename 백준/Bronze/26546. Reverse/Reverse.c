#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, i, j, idx = 0, len;
    scanf("%d", &n);
    char* st = (char*)malloc(sizeof(char) * 101);
    char* t = (char*)malloc(sizeof(char) * 101);
    for (int l = 0; l < n; l++) {
        scanf("%s %d %d", st, &i, &j);
        len = strlen(st), idx = 0;
        for (int k = 0; k < len; k++) {
            if (i <= k && k < j) continue;
            t[idx++] = st[k];
        }
        t[idx] = '\0';
        printf("%s\n", t);
    }
}