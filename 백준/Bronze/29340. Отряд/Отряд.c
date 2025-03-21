#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int l, size = 19;
    char* sq1 = (char*)malloc(sizeof(char) * size);
    char* sq2 = (char*)malloc(sizeof(char) * size);
    char* r = (char*)malloc(sizeof(char) * size);
    scanf("%s", sq1);
    scanf("%s", sq2);
    l = strlen(sq1);
    for (int i = 0; i < l; i++)
        r[i] = (sq1[i] - 48) > (sq2[i] - 48) ? sq1[i] : sq2[i];
    r[l] = '\0';
    printf("%s", r);
    return 0;
}