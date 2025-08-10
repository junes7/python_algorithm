#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, a, b, tmp;
    char *st = (char *)malloc(sizeof(char) * 101);
    scanf("%s %d", st, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        tmp = st[a];
        st[a] = st[b];
        st[b] = tmp;
    }
    printf("%s", st);
    return 0;
}