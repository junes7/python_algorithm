#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *a = (char *)malloc(sizeof(char) * 8);
    char *b = (char *)malloc(sizeof(char) * 8);
    int lena, lenb, sa = 0, sb = 0;
    scanf("%s %s", a, b);
    lena = strlen(a), lenb = strlen(b);
    for (int i = 0; i < lena; i++)
        sa += a[i] - 48;
    for (int i = 0; i < lenb; i++)
        sb += b[i] - 48;
    sa *= lena, sb *= lenb;
    printf("%d", sa == sb ? 0 : (sa > sb ? 1 : 2));
    return 0;
}