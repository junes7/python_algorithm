#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int cnt = 0;
    char *ch = (char *)malloc(sizeof(char) * 20);
    while (gets(ch)) {
        cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}