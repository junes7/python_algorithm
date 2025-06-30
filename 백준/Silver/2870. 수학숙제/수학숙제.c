#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    int lena, lenb;
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    lena = strlen(a), lenb = strlen(b);
    if (lena == lenb) return strcmp(a, b);
    return lena > lenb;
}
int main(void) {
    int n, len, idx, temp_idx, num_idx, rlt_idx = 0;
    char **temp, **rlt, *st, *t, *num;
    scanf("%d", &n);
    temp = (char **)malloc(sizeof(char *) * 50);
    rlt = (char **)malloc(sizeof(char *) * n * 50);
    st = (char *)malloc(sizeof(char) * 101);
    t = (char *)malloc(sizeof(char) * 101);
    num = (char *)malloc(sizeof(char) * 101);
    for (int i = 0; i < 50; i++)
        temp[i] = (char *)malloc(sizeof(char) * 101);
    for (int i = 0; i < n * 50; i++)
        rlt[i] = (char *)malloc(sizeof(char) * 101);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        num_idx = 0, temp_idx = 0, len = strlen(st);
        for (int j = 0; j < len; j++) {
            if (isdigit(st[j])) {
                num[num_idx++] = st[j];
            } else {
                if (num_idx) {
                    idx = -1;
                    for (int k = 0; k < num_idx; k++) {
                        if (num[k] != '0') {
                            idx = k;
                            break;
                        }
                    }
                    if (idx == -1 && num[num_idx - 1] == '0')
                        strcpy(num, "0");
                    else {
                        strncpy(t, num + idx, num_idx - idx);
                        strcpy(num, t);
                    }
                    num[num_idx - idx] = '\0';
                    strcpy(temp[temp_idx++], num);
                }
                num_idx = 0;
            }
        }
        if (num_idx) {
            idx = -1;
            for (int j = 0; j < num_idx; j++) {
                if (num[j] != '0') {
                    idx = j;
                    break;
                }
            }
            if (num_idx > 0 && idx == -1 && num[num_idx - 1] == '0')
                strcpy(num, "0");
            else {
                strncpy(t, num + idx, num_idx - idx);
                strcpy(num, t);
            }
            num[num_idx - idx] = '\0';
            strcpy(temp[temp_idx++], num);
        }
        for (int j = 0; j < temp_idx; j++)
            strcpy(rlt[rlt_idx++], temp[j]);
    }
    qsort(rlt, rlt_idx, sizeof(char *), cmp);
    for (int i = 0; i < rlt_idx; i++)
        printf("%s\n", rlt[i]);
    return 0;
}