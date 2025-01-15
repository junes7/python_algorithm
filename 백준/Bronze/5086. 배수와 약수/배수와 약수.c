#include <stdio.h>

int main(void) {
    int a, b;
    while (1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break;
        else {
            if (a % b == 0)
                printf("multiple\n");
            else if (b % a == 0)
                printf("factor\n");
            else
                printf("neither\n");
        }
    }
    return 0;
}