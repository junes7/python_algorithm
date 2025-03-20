#include <stdio.h>
int main(void) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A == B) {
        if (B == C) {
            printf("%c", '*');
        } else {
            printf("%c", 'C');
        }
    } else {
        if (B == C) {
            printf("%c", 'A');
        } else {
            printf("%c", 'B');
        }
    }
    return 0;
}