#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char st[11] = "SciComLove";
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%s", st);
    } else {
        for (int i = 9; i >= 0; i--) {
            printf("%c", st[i]);
        }
    }
    return 0;
}