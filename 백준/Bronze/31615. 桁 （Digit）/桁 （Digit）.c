#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int A, B;
    char* st = (char*)malloc(sizeof(char) * 4);
    scanf("%d", &A);
    scanf("%d", &B);
    sprintf(st, "%d", A + B);
    printf("%d", strlen(st));
    return 0;
}