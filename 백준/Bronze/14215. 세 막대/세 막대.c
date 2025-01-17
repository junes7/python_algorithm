#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(void) {
    int elem, s = 0, *num = (int *)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &elem);
        num[i] = elem;
    }
    qsort(num, sizeof(num) / sizeof(int) + 1, sizeof(int), compare);
    while (num[sizeof(num) / sizeof(int)] >= num[0] + num[1]) {
        num[sizeof(num) / sizeof(int)] -= 1;
    }
    for (int i = 0; i < 3; i++)
        s += num[i];
    free(num);
    printf("%d", s);
    return 0;
}