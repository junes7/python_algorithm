#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int T, N, s = 0;
    scanf("%d", &T);
    scanf("%d", &N);
    int *arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    printf("%s", s >= T ? "Padaeng_i Happy" : "Padaeng_i Cry");
    return 0;
}