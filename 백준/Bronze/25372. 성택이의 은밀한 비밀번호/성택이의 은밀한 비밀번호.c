#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    char *st = (char *)malloc(sizeof(char) * 21);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        len = strlen(st);
        printf("%s\n", 6 <= len && len <= 9 ? "yes" : "no");
    }
    return 0;
}