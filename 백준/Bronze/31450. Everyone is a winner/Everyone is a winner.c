#include <stdio.h>
int main(void) {
    int M, K;
    scanf("%d %d", &M, &K);
    printf("%s", M % K == 0 ? "Yes" : "No");
    return 0;
}