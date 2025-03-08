#include <stdio.h>
int main(void) {
    int L, A, B, C, D, lang, math;
    scanf("%d", &L);
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    lang = A / C + (A % C == 0 ? 0 : 1);
    math = B / D + (B % D == 0 ? 0 : 1);
    printf("%d", L - (lang > math ? lang : math));
    return 0;
}