#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, elem, cnt = 0;
    scanf("%d", &t);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &elem);
        if (elem == t)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}