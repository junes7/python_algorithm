#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m;
    char* st = (char*)malloc(sizeof(char) * 11);
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        for (int j = m - 1; j >= 0; j--) {
            printf("%c", st[j]);
        }
        printf("\n");
    }
    return 0;
}