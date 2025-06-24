#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
struct nlist {
    int num, frq;
};
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int cmp2(const void *pa, const void *pb) {
    struct nlist a = *(struct nlist *)pa;
    struct nlist b = *(struct nlist *)pb;
    if (a.frq == b.frq) return a.num > b.num;
    return a.frq < b.frq;
}
int main(void) {
    int n, idx = 0, *arr, rlt = 0;
    double total = 0;
    bool flag;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    struct nlist *dic = (struct nlist *)malloc(sizeof(struct nlist) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        flag = true;
        for (int j = 0; j < idx; j++) {
            if (dic[j].num == arr[i]) {
                flag = false;
                dic[j].frq += 1;
                break;
            }
        }
        if (flag) {
            dic[idx].num = arr[i];
            dic[idx++].frq = 1;
        }
        total += arr[i];
    }
    qsort(arr, n, sizeof(int), cmp);
    qsort(dic, idx, sizeof(struct nlist), cmp2);
    if (idx == 1) {
        rlt = dic[0].num;
    } else {
        rlt = dic[0].frq == dic[1].frq ? dic[1].num : dic[0].num;
    }
    printf("%d\n%d\n%d\n%d", (int)round(total / n), arr[n / 2], rlt, arr[n - 1] - arr[0]);
    return 0;
}