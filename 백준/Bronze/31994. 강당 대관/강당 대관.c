#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char* sbj = (char*)malloc(sizeof(char) * 23);
    char* r = (char*)malloc(sizeof(char) * 23);
    int num, maxn = 0;
    for (int i = 0; i < 7; i++) {
        scanf("%s %d", sbj, &num);
        if (maxn < num) {
            maxn = num;
            strcpy(r, sbj);
        }
    }
    printf("%s", r);
    return 0;
}