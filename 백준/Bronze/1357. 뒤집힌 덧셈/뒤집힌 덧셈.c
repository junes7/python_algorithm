#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char *st) {
    int len = strlen(st);
    char ch;
    for (int i = 0; i < len / 2; i++) {
        ch = st[i];
        st[i] = st[len - 1 - i];
        st[len - 1 - i] = ch;
    }
}
int main(void) {
    char *x = (char *)malloc(sizeof(char) * 4);
    char *y = (char *)malloc(sizeof(char) * 4);
    char *r = (char *)malloc(sizeof(char) * 4);
    scanf("%s %s", x, y);
    reverse(x);
    reverse(y);
    sprintf(r, "%d", atoi(x) + atoi(y));
    reverse(r);
    printf("%d", atoi(r));
    return 0;
}