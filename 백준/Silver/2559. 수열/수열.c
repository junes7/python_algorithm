#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, k, s = 0, elem;
    scanf("%d %d", &n, &k);
    int *num = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        s += elem;
        num[i] = s;
    }
    elem = num[k - 1];
    for (int i = k; i < n; i++)
        elem = elem > num[i] - num[i - k] ? elem : num[i] - num[i - k];
    printf("%d", elem);
    return 0;
}