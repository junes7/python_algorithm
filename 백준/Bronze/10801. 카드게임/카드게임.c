#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *A = (int *)malloc(sizeof(int) * 10);
    int *B = (int *)malloc(sizeof(int) * 10);
    int cntA = 0, cntB = 0;
    for (int i = 0; i < 10; i++)
        scanf("%d", &A[i]);
    for (int i = 0; i < 10; i++)
        scanf("%d", &B[i]);
    for (int i = 0; i < 10; i++) {
        if (A[i] == B[i])
            continue;
        if (A[i] > B[i])
            cntA += 1;
        else
            cntB += 1;
    }
    printf("%s", cntA == cntB ? "D" : (cntA > cntB ? "A" : "B"));
    return 0;
}