#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return b - a;
}
int main(void) {
    int n, e, len, idx = 0, result = 0;
    bool flag;
    scanf("%d", &n);
    char **s = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
        s[i] = (char *)malloc(sizeof(char) * 10);
        scanf("%s", s[i]);
    }
    char *words = (char *)malloc(sizeof(char) * 10);
    int *words_cnt = (int *)malloc(sizeof(int) * 10);
    memset(words_cnt, 0, sizeof(int) * 10);
    for (int i = 0; i < n; i++) {
        len = strlen(s[i]);
        e = len - 1;
        for (int j = 0; j < len; j++) {
            flag = true;
            for (int k = 0; k < idx; k++) {
                if (s[i][j] == words[k]) {
                    flag = false;
                    words_cnt[k] += pow(10, e);
                    break;
                }
            }
            if (flag) {
                words[idx] = s[i][j];
                words_cnt[idx++] = pow(10, e);
            }
            e -= 1;
        }
    }
    qsort(words_cnt, idx, sizeof(int), compare);
    e = 9;
    for (int i = 0; i < idx; i++)
        result += words_cnt[i] * e--;
    printf("%d", result);
    return 0;
}