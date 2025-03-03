#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int lena, lenb;
    char *a = (char *)malloc(sizeof(char) * 1001);
    char *b = (char *)malloc(sizeof(char) * 1001);
    scanf("%s", a);
    scanf("%s", b);
    lena = strlen(a), lenb = strlen(b);
    printf("%s", lena < lenb ? "no" : "go");
    return 0;
}