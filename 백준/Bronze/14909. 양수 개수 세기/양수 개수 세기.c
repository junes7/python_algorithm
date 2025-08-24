#include <stdio.h>
int main(void) {
    int n, cnt = 0;
    while (scanf("%d", &n) != EOF) {
        if (n > 0)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}