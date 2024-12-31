#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT], s2[LEN_INPUT];
    scanf("%s %s", s1, s2);
    // strcat(s1, s2);
    sprintf(s1+strlen(s1),"%s",s2);
    printf("%s", s1);
    return 0;
}