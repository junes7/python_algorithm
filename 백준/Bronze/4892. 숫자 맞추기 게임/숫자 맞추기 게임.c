#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int n0, n1, n2, n3, n4, idx = 0;
    while (true) {
        scanf("%d", &n0);
        if (n0 == 0) break;
        idx += 1;
        n1 = 3 * n0;
        n2 = (n1 % 2 == 0 ? n1 : n1 + 1) / 2;
        n3 = 3 * n2;
        n4 = n3 / 9;
        printf("%d. %s%d\n", idx, n1 % 2 != 0 ? "odd " : "even ", n4);
    }
    return 0;
}