#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char* t = (char*)malloc(sizeof(char) * 100);
    scanf("%s", t);
    for (int i = 0; i < strlen(t); i++)
        t[i] = isupper(t[i]) ? tolower(t[i]) : toupper(t[i]);
    printf("%s", t);
    return 0;
}