#include <stdio.h>

int main(void) {
    char* ch=(char*)malloc(sizeof(char)*100);
    scanf("%s",ch);
    printf("%d\n",strlen(ch));
    return 0;
}