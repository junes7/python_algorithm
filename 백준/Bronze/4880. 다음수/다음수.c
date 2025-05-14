#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int diff, *arr;
    arr = (int*)malloc(sizeof(int) * 3);
    while (true) {
        for (int i = 0; i < 3; i++)
            scanf("%d", &arr[i]);
        if (arr[1] == 0 && arr[2] == 0) break;
        diff = arr[1] - arr[0] == arr[2] - arr[1] ? arr[1] - arr[0] : arr[1] / arr[0];
        if (arr[1] - arr[0] == arr[2] - arr[1])
            printf("%s %d\n", "AP", arr[2] + diff);
        else
            printf("%s %d\n", "GP", arr[2] * diff);
    }
    return 0;
}