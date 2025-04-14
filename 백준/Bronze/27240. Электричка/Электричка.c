#include <stdio.h>
int main(void) {
    int n, a, b, s, t;
    scanf("%d %d %d", &n, &a, &b);
    scanf("%d %d", &s, &t);
    if (a + 1 <= s && s < b && a + 1 <= t && t < b) {
        printf("%s", "City");
    } else if ((1 <= s && s < a + 1) && (1 <= t && t < a + 1) || (b <= s && s < n + 1) && (b <= t && t < n + 1)) {
        printf("%s", "Outside");
    } else {
        printf("%s", "Full");
    }
    return 0;
}