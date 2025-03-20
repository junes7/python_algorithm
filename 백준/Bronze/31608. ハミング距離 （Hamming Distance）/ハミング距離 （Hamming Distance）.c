#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int N, cnt = 0;
    char *S = (char *)malloc(sizeof(char) * 101);
    char *T = (char *)malloc(sizeof(char) * 101);
    scanf("%d", &N);
    scanf("%s", S);
    scanf("%s", T);
    for (int i = 0; i < N; i++) {
        if (S[i] != T[i])
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}