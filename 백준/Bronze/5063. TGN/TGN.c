#include <stdio.h>
int main(void) {
    int n, r, e, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &r, &e, &c);
        printf("%s\n", e - r == c ? "does not matter" : (e - r > c ? "advertise" : "do not advertise"));
    }
    return 0;
}