#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    char *a = (char *)malloc(sizeof(char) * 1001);
    char *b = (char *)malloc(sizeof(char) * 1001);
    scanf("%d", &n);
    scanf("%s", a);
    scanf("%s", b);
    len = strlen(a);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < len; j++) {
            a[j] = a[j] == '0' ? '1' : '0';
        }
    }
    printf("%s", strcmp(a, b) == 0 ? "Deletion succeeded" : "Deletion failed");
    return 0;
}