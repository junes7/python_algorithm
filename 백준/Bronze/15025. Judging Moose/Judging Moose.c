#include <stdio.h>
int main(void) {
    int l, r;
    scanf("%d %d", &l, &r);
    if (l == 0 && r == 0) {
        printf("%s", "Not a moose");
    } else {
        if (l == r)
            printf("Even %d", l * 2);
        else
            printf("Odd %d", l > r ? l * 2 : r * 2);
    }
    return 0;
}