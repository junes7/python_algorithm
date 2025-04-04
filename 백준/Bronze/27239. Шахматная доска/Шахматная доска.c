#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 3);
    int n;
    scanf("%d", &n);
    st[0] = (char)'a' + (n % 8 == 0 ? 7 : n % 8 - 1);
    st[1] = (n % 8 == 0 ? n / 8 : n / 8 + 1) + 48;
    st[2] = '\0';
    printf("%s", st);
    return 0;
}