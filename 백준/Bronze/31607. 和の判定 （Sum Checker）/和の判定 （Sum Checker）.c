#include <stdio.h>
int main(void) {
    int total = 0, arr[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    for (int i = 0; i < 3; i++) {
        if (arr[i] == total - arr[i]) {
            printf("%d", 1);
            return 0;
        }
    }
    printf("%d", 0);
    return 0;
}