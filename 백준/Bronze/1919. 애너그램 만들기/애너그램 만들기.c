#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int total = 0, *a, *b, lens1, lens2;
    char *st1 = (char *)malloc(sizeof(char) * 1002);
    char *st2 = (char *)malloc(sizeof(char) * 1002);
    scanf("%s", st1);
    scanf("%s", st2);
    a = (int *)malloc(sizeof(int) * 26);
    b = (int *)malloc(sizeof(int) * 26);
    memset(a, 0, sizeof(int) * 26);
    memset(b, 0, sizeof(int) * 26);
    lens1 = strlen(st1), lens2 = strlen(st2);
    for (int i = 0; i < lens1; i++)
        a[st1[i] - 97] += 1;
    for (int i = 0; i < lens2; i++)
        b[st2[i] - 97] += 1;
    for (int i = 0; i < 26; i++)
        total += a[i] > b[i] ? a[i] - b[i] : b[i] - a[i];
    printf("%d", total);
    return 0;
}