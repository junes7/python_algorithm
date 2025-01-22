#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, elem, maxn = 0;
    scanf("%d", &n);
    int num[10001];
    memset(num, 0, sizeof(int) * 10001);
    bool flag;
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        num[elem] += 1;
        if (maxn < elem)
            maxn = elem;
    }
    for (int i = 0; i <= maxn; i++) {
        if (num[i] > 0) {
            for (int j = 0; j < num[i]; j++) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}