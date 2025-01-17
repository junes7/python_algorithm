#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(void) {
    int elem, s = 0;
    int *num = (int *)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &elem);
        num[i] = elem;
    }
    qsort(num, 3, sizeof(int), compare);
    for (int i = 0; i < 3; i++)
        s += num[i];
    if (s == 180) {
        if (num[0] == 60)
            printf("Equilateral");
        else {
            printf(num[0] == num[1] || num[1] == num[2] ? "Isosceles" : "Scalene");
        }
    } else {
        printf("Error");
    }
    free(num);
    return 0;
}