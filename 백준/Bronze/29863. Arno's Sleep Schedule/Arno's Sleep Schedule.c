#include <stdio.h>
int main(void) {
    int st, end;
    scanf("%d", &st);
    scanf("%d", &end);
    printf("%d", 20 <= st && st <= 23 ? end - (st - 24) : end - st);
    return 0;
}