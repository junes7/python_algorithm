#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char* a = (char*)malloc(sizeof(char) * 5);
    char* b = (char*)malloc(sizeof(char) * 5);
    char* c = (char*)malloc(sizeof(char) * 5);
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    printf("%d\n", atoi(a) + atoi(b) - atoi(c));
    printf("%d", atoi(strcat(a, b)) - atoi(c));
    return 0;
}