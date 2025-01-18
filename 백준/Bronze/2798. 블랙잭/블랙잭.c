#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main(void) {
    int n, m, elem, idx = 0, *num = (int *)malloc(sizeof(int) * 100);
    int *suml = (int *)malloc(sizeof(int) * 300000);
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        num[i] = elem;
    }
    qsort(num, n, sizeof(int), compare);
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                elem = num[i] + num[j] + num[k];
                if (elem == m) {
                    suml[idx++] = elem;
                    break;
                } else if (elem < m) {
                    suml[idx++] = elem;
                }
            }
        }
    }
    elem = suml[0];
    for (int i = 1; i < idx; i++) {
        if (elem < suml[i]) {
            elem = suml[i];
        }
    }
    printf("%d", elem);
    return 0;
}