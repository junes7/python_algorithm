#include <stdio.h>
int main(void) {
    int n, h, w, area = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &h, &w);
        if (area < h * w)
            area = h * w;
    }
    printf("%d", area);
    return 0;
}