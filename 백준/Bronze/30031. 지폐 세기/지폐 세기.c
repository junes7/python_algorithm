#include <stdio.h>
int main(void) {
    int n, w, h, s = 0;
    int width[4] = {136, 142, 148, 154};
    int money[4] = {1000, 5000, 10000, 50000};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &w, &h);
        for (int j = 0; j < 4; j++) {
            if (width[j] == w)
                s += money[j];
        }
    }
    printf("%d", s);
    return 0;
}