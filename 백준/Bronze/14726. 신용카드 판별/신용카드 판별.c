#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, num, total, len;
    char* st = (char*)malloc(sizeof(char) * 17);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s", st);
        total = 0, len = strlen(st);
        for (int j = 0; j < len; j++) {
            num = (st[j] - 48) * ((j + 1) % 2 != 0 ? 2 : 1);
            total += num > 9 ? num / 10 + num % 10 : num;
        }
        printf("%s\n", total % 10 == 0 ? "T" : "F");
    }
    return 0;
}