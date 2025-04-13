#include <stdio.h>
int main(void) {
    int s, ma, f, mb;
    scanf("%d", &s);
    scanf("%d %d %d", &ma, &f, &mb);
    printf("%s", s <= ma + f + mb || s <= 240 ? "high speed rail" : "flight");
    return 0;
}