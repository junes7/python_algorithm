#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, maxn, total, *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * 3);
    for (int i = 1; i < n + 1; i++) {
        maxn = 0, total = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[j]);
            if (maxn < arr[j]) maxn = arr[j];
            total += arr[j];
        }
        if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[0])
            printf("Case #%d: %s\n", i, "equilateral");
        else if (maxn < total - maxn)
            printf("Case #%d: %s\n", i, arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2] ? "isosceles" : "scalene");
        else
            printf("Case #%d: %s\n", i, "invalid!");
    }
    return 0;
}