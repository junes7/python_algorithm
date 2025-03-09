#include <stdio.h>
int main(void) {
    int n, elem, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &elem);
        if (elem == n)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}