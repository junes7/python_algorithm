#include <stdio.h>
int main(void) {
    int t, n, s;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        s = 0;
        for (int j = 1; j < n + 1; j++) {
            if (j % 2 != 0)
                s += j;
        }
        printf("%d\n", s);
    }
    return 0;
}