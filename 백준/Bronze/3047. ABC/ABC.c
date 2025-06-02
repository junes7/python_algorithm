#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int *arr = (int *)malloc(sizeof(int) * 3);
    char *st = (char *)malloc(sizeof(char) * 4);
    for (int i = 0; i < 3; i++)
        scanf("%d", &arr[i]);
    qsort(arr, 3, sizeof(int), cmp);
    scanf("%s", st);
    for (int i = 0; i < 3; i++)
        printf("%d ", arr[st[i] - 65]);
    return 0;
}