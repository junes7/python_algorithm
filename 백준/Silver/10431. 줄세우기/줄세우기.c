#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, t, s, total, *arr;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        arr = (int*)malloc(sizeof(int) * 21);
        for (int j = 0; j < 21; j++)
            scanf("%d", &arr[j]);
        total = 0;
        for (int j = 1; j < 20; j++) {
            for (int k = j + 1; k < 21; k++) {
                if (arr[j] > arr[k]) {
                    s = arr[j];
                    arr[j] = arr[k];
                    arr[k] = s;
                    total += 1;
                }
            }
        }
        printf("%d %d\n", arr[0], total);
    }
    return 0;
}