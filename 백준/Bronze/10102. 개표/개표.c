#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, *t = (int*)malloc(sizeof(int) * 2);
    memset(t, 0, sizeof(int) * 2);
    char* st = (char*)malloc(sizeof(char) * 16);
    scanf("%d", &n);
    scanf("%s", st);
    for (int i = 0; i < n; i++)
        if (st[i] == 'A')
            t[0] += 1;
        else
            t[1] += 1;
    printf("%s", t[0] == t[1] ? "Tie" : (t[0] > t[1] ? "A" : "B"));
    return 0;
}