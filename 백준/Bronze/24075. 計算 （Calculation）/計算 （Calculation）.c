#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return b - a;
}
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[2] = {a + b, a - b};
    qsort(arr, 2, sizeof(int), compare);
    for (int i = 0; i < 2; i++)
        printf("%d\n", arr[i]);
    return 0;
}