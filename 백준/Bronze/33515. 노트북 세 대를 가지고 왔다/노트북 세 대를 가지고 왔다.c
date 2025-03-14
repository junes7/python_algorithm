#include <stdio.h>
int main(void) {
    int T1, T2;
    scanf("%d", &T1);
    scanf("%d", &T2);
    printf("%d", T1 <= T2 ? T1 : T2);
    return 0;
}