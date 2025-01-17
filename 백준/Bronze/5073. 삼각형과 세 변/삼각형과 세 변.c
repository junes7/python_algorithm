#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(void) {
    int elem, s, *num = (int *)malloc(sizeof(int) * 3);
    while (1) {
        s = 0;
        for (int i = 0; i < 3; i++) {
            scanf("%d", &elem);
            num[i] = elem;
            s += elem;
        }
        if (s == 0)
            break;
        else {
            qsort(num, 3, sizeof(int), compare);
            if (num[2] >= num[0] + num[1])
                printf("Invalid");
            else {
                if (num[0] == num[2])
                    printf("Equilateral");
                else {
                    printf(num[0] == num[1] || num[1] == num[2] ? "Isosceles" : "Scalene");
                }
            }
            printf("\n");
        }
    }
    return 0;
}