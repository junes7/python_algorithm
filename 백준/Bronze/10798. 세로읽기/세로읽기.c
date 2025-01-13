#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char** ch = (char**)malloc(sizeof(char*) * 5);
    char* temp = (char*)malloc(sizeof(char) * 15);
    int maxn = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%s", temp);
        if (maxn < strlen(temp)) {
            maxn = strlen(temp);
        }
        ch[i] = (char*)malloc(sizeof(char) * strlen(temp));
        strcpy(ch[i], temp);
    }
    for (int i = 0; i < maxn; i++) {
        for (int j = 0; j < 5; j++) {
            if (isalnum(ch[j][i]) != 0)
                printf("%c", ch[j][i]);
        }
    }
    return 0;
}