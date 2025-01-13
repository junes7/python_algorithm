#include <stdio.h>
#include <string.h>

int main(void) {
    char ch[100];
    scanf("%s", &ch);
    int len = strlen(ch), r = 1;
    for (int i = 0; i < len / 2; i++) {
        if (ch[i] != ch[len - 1 - i]) {
            r = 0;
            break;
        }
    }
    printf("%d", r);
    return 0;
}