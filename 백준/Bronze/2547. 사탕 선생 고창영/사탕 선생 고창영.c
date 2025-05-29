#include <stdio.h>
int main(void) {
    int t, n;
    long long s, elem;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        s = 0;
        for (int j = 0; j < n; j++) {
            scanf("%lld", &elem);
            s = (s + elem) % n;
        }
        printf("%s\n", s % n == 0 ? "YES" : "NO");
    }
    return 0;
}