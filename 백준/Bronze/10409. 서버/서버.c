#include <stdio.h>
int main(void) {
    int n, t, elem, cnt = 0, rlt = 0;
    scanf("%d %d", &n, &t);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        if (rlt + elem > t)
            break;
        rlt += elem;
        cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}