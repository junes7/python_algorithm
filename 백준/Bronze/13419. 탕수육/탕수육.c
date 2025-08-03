#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, idx;
    char* st = (char*)malloc(sizeof(char) * 27);
    char** rlt = (char**)malloc(sizeof(char*) * 2);
    for (int i = 0; i < 2; i++) {
        rlt[i] = (char*)malloc(sizeof(char) * 27);
        memset(rlt[i], 0, sizeof(char) * 27);
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        len = strlen(st);
        if (len % 2 == 0) {
            for (int i = 0; i < 2; i++) {
                idx = 0;
                for (int j = i; j < len; j += 2) {
                    rlt[i][idx++] = st[j];
                }
                rlt[i][idx] = '\0';
            }
        } else {
            idx = 0;
            for (int i = 0; i < 2; i++) {
                for (int j = i; j < len; j += 2) {
                    rlt[0][idx++] = st[j];
                }
            }
            rlt[0][idx] = '\0';
            idx = 0;
            for (int i = 1; i >= 0; i--) {
                for (int j = i; j < len; j += 2) {
                    rlt[1][idx++] = st[j];
                }
            }
            rlt[1][idx] = '\0';
        }
        printf("%s\n%s\n", rlt[0], rlt[1]);
    }
    return 0;
}