#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int a, b, i = 0;
    char* st = (char*)malloc(sizeof(char) * 1005);
    char* t = (char*)malloc(sizeof(char) * 1000);
    scanf("%d %d", &a, &b);
    sprintf(st, "%d", a / b);
    strcat(st, ".");
    if (a % b) {
        while (a % b && i < 1000) {
            a = a % b * 10;
            i += 1;
            sprintf(t, "%d", a / b);
            strcat(st, t);
        }
    }
    printf("%s", st);
    return 0;
}