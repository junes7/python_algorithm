#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, idx, num;
    char* st = (char*)malloc(sizeof(char) * 101);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        memset(st, 0, sizeof(char) * 101);
        if (num / 5 > 0) {
            for (int j = 0; j < num / 5; j++) {
                strcat(st, "++++ ");
            }
        }
        if (num % 5 > 0) {
            for (int j = 0; j < num % 5; j++) {
                strcat(st, "|");
            }
        }
        printf("%s\n", st);
    }
    return 0;
}