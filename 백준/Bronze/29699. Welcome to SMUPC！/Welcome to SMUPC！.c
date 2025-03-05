#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    scanf("%d", &n);
    char* st = (char*)malloc(sizeof(char) * 15);
    strcpy(st, "WelcomeToSMUPC");
    len = strlen(st);
    printf("%c", st[--n % len]);
    return 0;
}