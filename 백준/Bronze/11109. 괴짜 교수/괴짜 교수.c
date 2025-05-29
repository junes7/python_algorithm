#include <stdio.h>
int main(void) {
    int t, d, n, s, p;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d %d", &d, &n, &s, &p);
        printf("%s\n", n * s == d + n * p ? "does not matter" : (n * s > d + n * p ? "parallelize" : "do not parallelize"));
    }
    return 0;
}