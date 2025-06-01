#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 9);
    int rlt, len, idx;
    char dic[9] = {'-', '\\', '(', '@', '?', '>', '&', '%', '/'};
    int dic_n[9] = {0, 1, 2, 3, 4, 5, 6, 7, -1};
    while (1) {
        scanf("%s", st);
        if (strcmp(st, "#") == 0) break;
        rlt = 0, len = strlen(st);
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < 9; j++) {
                if (st[i] == dic[j]) {
                    idx = j;
                    break;
                }
            }
            rlt += dic_n[idx] * pow(8, len - 1 - i);
        }
        printf("%d\n", rlt);
    }
    return 0;
}