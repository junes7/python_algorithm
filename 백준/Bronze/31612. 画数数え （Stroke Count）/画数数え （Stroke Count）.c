#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, s = 0;
    char* st = (char*)malloc(sizeof(char) * 101);
    scanf("%d", &n);
    scanf("%s", st);
    for (int i = 0; i < n; i++)
        s += st[i] == 'j' || st[i] == 'i' ? 2 : 1;
    printf("%d", s);
    return 0;
}