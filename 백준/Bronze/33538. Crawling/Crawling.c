#include <stdio.h>
int main(void) {
    int l, n, cnt = 0;
    double t, ft, bt;
    scanf("%d", &l);
    scanf("%d", &n);
    scanf("%lf", &t);
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &ft, &bt);
        if (l / ft + l / bt < t)
            cnt += 1;
    }
    printf("%s", cnt > 0 ? "HOPE" : "DOOMED");
    return 0;
}