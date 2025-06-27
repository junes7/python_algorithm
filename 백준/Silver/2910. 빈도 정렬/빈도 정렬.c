#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct nlist {
    int num, cnt, idx;
};
int cmp(const void *pa, const void *pb) {
    const struct nlist a = *(struct nlist *)pa;
    const struct nlist b = *(struct nlist *)pb;
    if (a.cnt == b.cnt) return a.idx > b.idx;
    return a.cnt < b.cnt;
}
int main(void) {
    int n, c, t = 0, elem;
    bool flag;
    scanf("%d %d", &n, &c);
    struct nlist *dic = (struct nlist *)malloc(sizeof(struct nlist) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        flag = true;
        for (int j = 0; j < t; j++) {
            if (dic[j].num == elem) {
                flag = false;
                dic[j].cnt += 1;
                break;
            }
        }
        if (flag) {
            dic[t].num = elem;
            dic[t].cnt = 1;
            dic[t++].idx = i;
        }
    }
    qsort(dic, t, sizeof(struct nlist), cmp);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < dic[i].cnt; j++)
            printf("%d ", dic[i].num);
    }
    return 0;
}