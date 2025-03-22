#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    char* st = (char*)malloc(sizeof(char) * n);
    scanf("%d", &n);
    scanf("%s", st);
    for (int i = 0; i < n; i++) {
        if (st[i] == 'I')
            st[i] = 'i';
        else if (st[i] == 'l')
            st[i] = 'L';
    }
    printf("%s", st);
    return 0;
}