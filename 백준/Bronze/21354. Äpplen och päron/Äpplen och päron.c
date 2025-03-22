#include <stdio.h>
int main(void) {
    int A, P;
    scanf("%d %d", &A, &P);
    printf("%s", A * 7 == P * 13 ? "lika" : (A * 7 > P * 13 ? "Axel" : "Petra"));
    return 0;
}