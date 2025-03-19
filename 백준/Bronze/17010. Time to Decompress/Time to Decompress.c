#include <stdio.h>
int main(void) {
    int L, n;
    char ch;
    scanf("%d", &L);
    for (int i = 0; i < L; i++) {
        scanf("%d %c", &n, &ch);
        for (int j = 0; j < n; j++)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}