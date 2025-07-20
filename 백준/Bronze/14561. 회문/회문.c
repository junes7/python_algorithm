#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, n, idx;
    long long a, tmp;
    bool flag;
    scanf("%d", &t);
    char *arr = (char *)malloc(sizeof(char) * 25);
    for (int i = 0; i < t; i++) {
        idx = 0;
        scanf("%lld %d", &a, &n);
        memset(arr, 0, sizeof(char) * 25);
        while (a > 0) {
            tmp = a % n;
            arr[idx++] = tmp < 10 ? (char)(tmp + 48) : (char)(tmp + 55);
            a /= n;
        }
        flag = true;
        for (int j = 0; j < idx / 2; j++) {
            if (arr[j] != arr[idx - 1 - j]) {
                flag = false;
                break;
            }
        }
        printf("%d\n", flag ? 1 : 0);
    }
    return 0;
}