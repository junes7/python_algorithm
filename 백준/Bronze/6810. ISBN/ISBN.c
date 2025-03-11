#include <stdio.h>
#include <string.h>
int main(void) {
    int s = 0, t;
    char st[10];
    strcpy(st, "9780921418");
    for (int i = 0; i < 10; i++) {
        s += i % 2 == 0 ? (st[i] - 48) * 1 : (st[i] - 48) * 3;
    }
    for (int i = 0; i < 3; i++) {
        scanf("%d", &t);
        s += i % 2 == 0 ? t * 1 : t * 3;
    }
    printf("The 1-3-sum is %d", s);
    return 0;
}