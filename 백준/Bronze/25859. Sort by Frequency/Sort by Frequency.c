#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct alpha {
    char ch;
    int cnt;
};
int cmp(const void *pa, const void *pb) {
    struct alpha a = *(struct alpha *)pa;
    struct alpha b = *(struct alpha *)pb;
    if (a.cnt == b.cnt) return a.ch - b.ch;
    return b.cnt - a.cnt;
}
int main(void) {
    int len, idx = 0, sidx = 0;
    bool flag;
    char *st = (char *)malloc(sizeof(char) * 71);
    char *rlt = (char *)malloc(sizeof(char) * 71);
    scanf("%s", st);
    len = strlen(st);
    struct alpha *dic = (struct alpha *)malloc(sizeof(struct alpha) * len);
    for (int i = 0; i < len; i++) {
        flag = true;
        for (int j = 0; j < idx; j++) {
            if (dic[j].ch == st[i]) {
                dic[j].cnt += 1;
                flag = false;
                break;
            }
        }
        if (flag) {
            dic[idx].ch = st[i];
            dic[idx++].cnt = 1;
        }
    }
    qsort(dic, idx, sizeof(struct alpha), cmp);
    for (int i = 0; i < idx; i++) {
        for (int j = 0; j < dic[i].cnt; j++) {
            rlt[sidx++] = dic[i].ch;
        }
    }
    rlt[sidx] = '\0';
    printf("%s", rlt);
    return 0;
}