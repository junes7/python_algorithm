#include <stdio.h>
int main(void) {
    int n, total, minn, elem;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        total = 0, minn = 100;
        for (int i = 0; i < 7; i++) {
            scanf("%d", &elem);
            if (elem % 2 == 0) {
                total += elem;
                if (minn > elem)
                    minn = elem;
            }
        }
        printf("%d %d\n", total, minn);
    }
    return 0;
}