#include <stdio.h>
int main(void) {
    int t, s;
    scanf("%d %d", &t, &s);
    printf("%d", s == 0 && 12 <= t && t <= 16 ? 320 : 280);
    return 0;
}