#include <stdio.h>

int main(void) {
    int i;
    char* ch=(char*)malloc(sizeof(char)*1000);
    scanf("%s",ch);
    scanf("%d",&i);
    printf("%c\n",ch[i-1]);
    return 0;
}