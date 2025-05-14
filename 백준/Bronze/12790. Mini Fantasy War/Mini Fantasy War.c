#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, elem, *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * 4);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++)
            scanf("%d", &arr[j]);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &elem);
            arr[j] += elem;
        }
        for (int j = 0; j < 3; j++) {
            if (arr[j] < 1)
                arr[j] = j - 2 == 0 ? 0 : 1;
        }
        printf("%d\n", 1 * arr[0] + 5 * arr[1] + 2 * arr[2] + 2 * arr[3]);
    }
    return 0;
}