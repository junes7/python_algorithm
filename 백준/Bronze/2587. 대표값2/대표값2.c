#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}
int main(void) {
    int elem, sum = 0, *num = (int *)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &elem);
        num[i] = elem;
        sum += elem;
    }
    qsort(num, 5, sizeof(int), compare);
    printf("%d\n%d", sum / 5, num[5 / 2]);
    free(num);
    return 0;
}