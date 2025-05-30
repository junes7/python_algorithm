#include <stdio.h>
int main(void) {
    int t, n, elem, s;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        s = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &elem);
            s += elem;
        }
        printf("%s\n", s > 0 ? "Right" : (s < 0 ? "Left" : "Equilibrium"));
    }
    return 0;
}