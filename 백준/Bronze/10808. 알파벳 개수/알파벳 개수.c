#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len;
    char* st = (char*)malloc(sizeof(char) * 101);
    int* alpha = (int*)malloc(sizeof(int) * 26);
    memset(alpha, 0, sizeof(int) * 26);
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len; i++)
        alpha[st[i] - 97] += 1;
    for (int i = 0; i < 26; i++)
        printf("%d ", alpha[i]);
    return 0;
}