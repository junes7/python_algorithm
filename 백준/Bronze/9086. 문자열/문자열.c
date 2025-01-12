#include <stdio.h>

int main(void) {
    int n;
    char* ch=(char*)malloc(sizeof(char)*1000);
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%s",ch);
        printf("%c%c\n",ch[0],ch[strlen(ch) - 1]);
    }
    return 0;
}