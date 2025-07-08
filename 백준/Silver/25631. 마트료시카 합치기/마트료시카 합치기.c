#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
struct slist {
    int size, cnt;
};
int main(void) {
    int n, elem, idx = 0, rlt, maxn = 0;
    scanf("%d", &n);
    bool flag;
    struct slist* dic = (struct slist*)malloc(sizeof(struct slist) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        flag = true;
        for (int j = 0; j < idx; j++) {
            if (dic[j].size == elem) {
                flag = false;
                rlt = j;
                dic[j].cnt += 1;
                break;
            }
        }
        if (flag) {
            dic[idx].size = elem;
            rlt = idx;
            dic[idx++].cnt = 1;
        }
        if (maxn < dic[rlt].cnt)
            maxn = dic[rlt].cnt;
    }
    printf("%d", maxn);
    return 0;
}