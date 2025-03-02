#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len;
    char* s = (char*)malloc(sizeof(char) * (pow(10, 6)));
    scanf("%s", s);
    len = strlen(s);
    for (int i = 0; i < len; i++)
        s[i] -= 32;
    printf("%s", s);
    return 0;
}