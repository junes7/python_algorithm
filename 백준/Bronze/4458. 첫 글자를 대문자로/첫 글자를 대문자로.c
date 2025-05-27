#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    char* st = (char*)malloc(sizeof(char) * 31);
    gets(st);
    for (int i = 0; i < n; i++) {
        gets(st);
        if (islower(st[0]))
            st[0] = toupper(st[0]);
        printf("%s\n", st);
    }
    return 0;
}