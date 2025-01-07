#include <stdio.h>
#include <string.h>

int main(void) {
    char t[50];
    scanf("%s",&t);
    strcat(t,"??!");
    printf("%s\n",t);
    return 0;
}