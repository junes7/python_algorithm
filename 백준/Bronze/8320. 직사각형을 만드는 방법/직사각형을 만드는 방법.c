#include <stdio.h>
int main(void) {
    int n, rlt = 0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++) {
        for (int j = i; j < n / i + 1; j++)
            rlt += 1;
    }
    printf("%d", rlt);
    return 0;
}