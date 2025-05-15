#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, s, elem, *tech = (int*)malloc(sizeof(int) * 3), maxn = 0;
    for (int i = 0; i < 3; i++)
        scanf("%d", &tech[i]);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        s = 0;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                scanf("%d", &elem);
                s += tech[k] * elem;
            }
        }
        if (maxn < s)
            maxn = s;
    }
    printf("%d", maxn);
    return 0;
}