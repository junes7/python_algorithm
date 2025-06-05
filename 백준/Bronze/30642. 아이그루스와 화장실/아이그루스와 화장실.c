#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, k;
    char* st = (char*)malloc(sizeof(char) * 8);
    scanf("%d %s %d", &n, st, &k);
    if (strcmp(st, "annyong") == 0) {
        printf("%d", k % 2 == 1 ? k : (k + 1 <= n ? k + 1 : k - 1));
    } else {
        printf("%d", k % 2 == 0 ? k : (k + 1 <= n ? k + 1 : k - 1));
    }
    return 0;
}