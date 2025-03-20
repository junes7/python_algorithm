#include <stdio.h>
int main(void) {
    int n, ti, li, minn = 200;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &ti, &li);
        if (minn > ti + li)
            minn = ti + li;
    }
    printf("%d", minn);
    return 0;
}