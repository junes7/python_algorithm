#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char ch, *st = (char *)malloc(sizeof(char) * 26);
    bool flag;
    scanf("%s", st);
    for (int i = 0; i < 26; i++) {
        ch = 65 + i;
        flag = true;
        for (int j = 0; j < 25; j++) {
            if (st[j] == ch) {
                flag = false;
                break;
            }
        }
        if (flag) {
            printf("%c", ch);
            break;
        }
    }
    return 0;
}