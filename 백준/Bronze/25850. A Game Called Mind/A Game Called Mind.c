#include <stdio.h>
#include <stdlib.h>
struct nlist {
    int num;
    char ch;
};
int cmp(const void *pa, const void *pb) {
    struct nlist a = *(struct nlist *)pa;
    struct nlist b = *(struct nlist *)pb;
    return a.num - b.num;
}
int main(void) {
    int p, c, cnt = 0, elem, idx = 0;
    scanf("%d", &p);
    struct nlist *rlt = (struct nlist *)malloc(sizeof(struct nlist) * (9 * p));
    char *st;
    for (int i = 0; i < p; i++) {
        scanf("%d", &c);
        cnt += c;
        for (int j = 0; j < c; j++) {
            scanf("%d", &elem);
            rlt[idx].num = elem;
            rlt[idx++].ch = (char)(65 + i);
        }
    }
    qsort(rlt, idx, sizeof(struct nlist), cmp);
    st = (char *)malloc(sizeof(char) * cnt);
    for (int i = 0; i < cnt; i++)
        st[i] = rlt[i].ch;
    st[cnt] = '\0';
    printf("%s", st);
    return 0;
}