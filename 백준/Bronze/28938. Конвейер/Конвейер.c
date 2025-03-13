#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, s = 0, *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    printf("%s", s > 0 ? "Right" : (s < 0 ? "Left" : "Stay"));
    return 0;
}