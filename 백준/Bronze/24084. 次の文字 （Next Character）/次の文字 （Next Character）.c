#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    char* s = (char*)malloc(sizeof(char) * 101);
    scanf("%d", &n);
    scanf("%s", s);
    for (int i = 0; i < n - 1; i++)
        if (s[i + 1] == 'J')
            printf("%c\n", s[i]);
    return 0;
}