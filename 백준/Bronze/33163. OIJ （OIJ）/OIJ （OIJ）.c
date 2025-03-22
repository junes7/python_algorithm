#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 101);
    int n;
    scanf("%d", &n);
    scanf("%s", st);
    char cur[3][2] = {{'J', 'O'}, {'O', 'I'}, {'I', 'J'}};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            if (st[i] == cur[j][0]) {
                st[i] = cur[j][1];
                break;
            }
    printf("%s", st);
    return 0;
}