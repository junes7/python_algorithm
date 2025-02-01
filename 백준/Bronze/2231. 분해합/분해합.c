#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, num = 0, t;
    char *s = (char *)malloc(sizeof(char) * 7);
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++) {
        num = i, t = i;
        sprintf(s, "%d", i);
        len = strlen(s);
        for (int i = 0; i < len; i++)
            t += s[i] - 48;
        if (t == n)
            break;
    }
    printf("%d", num == n ? 0 : num);
    return 0;
}