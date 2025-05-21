#include <stdio.h>
int main(void) {
    int r, b, LpW, LmW;
    scanf("%d %d", &r, &b);
    LpW = (r + 4) / 2, LmW = r + b;
    for (int i = 3; i < LpW; i++) {
        if ((LpW - i) * i == LmW) {
            printf("%d %d", LpW - i > i ? LpW - i : i, LpW - i < i ? LpW - i : i);
            break;
        }
    }
    return 0;
}