#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, n, maxn, l;
    char *name = (char *)malloc(sizeof(char) * 21);
    char *s = (char *)malloc(sizeof(char) * 21);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        maxn = 0;
        for (int j = 0; j < n; j++) {
            scanf("%s %d", s, &l);
            if (maxn < l) {
                maxn = l;
                strcpy(name, s);
            }
        }
        printf("%s\n", name);
    }
    return 0;
}