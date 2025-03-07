#include <stdio.h>
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    printf(n * 100 >= m ? "Yes" : "No");
    return 0;
}