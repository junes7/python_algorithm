#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct search {
    int idx, cnt;
};
int cmp(const void *pa, const void *pb) {
    const struct search a = *(struct search *)pa;
    const struct search b = *(struct search *)pb;
    if (a.cnt == b.cnt) return a.idx - b.idx;
    return b.cnt - a.cnt;
}
int main(void) {
    int n, m, elem, idx = 0;
    bool flag;
    scanf("%d %d", &n, &m);
    struct search *dic = (struct search *)malloc(sizeof(struct search) * m);
    memset(dic, 0, sizeof(struct search) * m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &elem);
            if (elem == 1) {
                flag = true;
                for (int k = 0; k < idx; k++) {
                    if (dic[k].idx == j + 1) {
                        flag = false;
                        dic[k].cnt += 1;
                        break;
                    }
                }
                if (flag) {
                    dic[idx].idx = j + 1;
                    dic[idx++].cnt = 1;
                }
            }
        }
    }
    qsort(dic, m, sizeof(struct search), cmp);
    for (int i = 0; i < m; i++)
        printf("%d ", dic[i].idx);
    return 0;
}