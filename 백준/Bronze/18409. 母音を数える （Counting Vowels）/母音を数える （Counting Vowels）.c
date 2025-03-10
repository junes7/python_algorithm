#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, cnt = 0;
    scanf("%d", &n);
    char* st = (char*)malloc(sizeof(char) * (n + 1));
    char vowels[5] = {'a', 'i', 'u', 'e', 'o'};
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 5; j++) {
            if (st[i] == vowels[j]) {
                cnt += 1;
                break;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}