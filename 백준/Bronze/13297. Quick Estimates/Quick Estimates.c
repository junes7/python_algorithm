#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char* st = (char*)malloc(sizeof(char) * 101);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        printf("%d\n", strlen(st));
    }
    return 0;
}