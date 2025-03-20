#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j)
                cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}