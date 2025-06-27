#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(a, b);
}
int main(void) {
    int t, len, cnt, rlt, total = -1;
    char *yeondu = (char *)malloc(sizeof(char) * 21);
    char *ans = (char *)malloc(sizeof(char) * 21);
    char *st = (char *)malloc(sizeof(char) * 42);
    char tar[5] = "LOVE";
    scanf("%s", yeondu);
    scanf("%d", &t);
    char **teams = (char **)malloc(sizeof(char *) * t);
    int *elem = (int *)malloc(sizeof(int) * 4);
    for (int i = 0; i < t; i++) {
        teams[i] = (char *)malloc(sizeof(char) * 21);
        scanf("%s", teams[i]);
    }
    qsort(teams, t, sizeof(char *), cmp);
    for (int i = 0; i < t; i++) {
        strcpy(st, yeondu);
        strcat(st, teams[i]);
        rlt = 1, len = strlen(st);
        for (int j = 0; j < 4; j++) {
            cnt = 0;
            for (int k = 0; k < len; k++) {
                if (tar[j] == st[k])
                    cnt += 1;
            }
            elem[j] = cnt;
        }
        for (int j = 0; j < 3; j++) {
            for (int k = j + 1; k < 4; k++) {
                rlt *= (elem[j] + elem[k]);
            }
        }
        if (total < rlt % 100) {
            total = rlt % 100;
            strcpy(ans, teams[i]);
        }
    }
    printf("%s", ans);
    return 0;
}