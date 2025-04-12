#include <stdio.h>
int main(void) {
    int p, q;
    scanf("%d",&p);
    scanf("%d",&q);
    if (p <= 50 && q <= 10) {
        printf("%s","White");
    } else if (q > 30) {
        printf("%s","Red");
    } else {
        printf("%s","Yellow");
    }
    return 0;
}