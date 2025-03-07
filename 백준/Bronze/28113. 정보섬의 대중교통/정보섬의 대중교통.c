#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    char* st = (char*)malloc(sizeof(char) * 9);
    if (b == a)
        strcpy(st, "Anything");
    else if (b > a)
        strcpy(st, "Bus");
    else
        strcpy(st, "Subway");
    printf("%s", st);
    return 0;
}