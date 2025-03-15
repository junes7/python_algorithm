#include <stdio.h>
int main(void) {
    int A, W, V;
    scanf("%d", &A);
    scanf("%d %d", &W, &V);
    printf("%d", W / V >= A ? 1 : 0);
    return 0;
}