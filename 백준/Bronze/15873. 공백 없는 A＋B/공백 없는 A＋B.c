#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *t = (char *)malloc(sizeof(char) * 5);
    char *n1 = (char *)malloc(sizeof(char) * 3);
    char *n2 = (char *)malloc(sizeof(char) * 3);
    int len = 0;
    scanf("%s ", t);
    len = strlen(t);
    strncpy(n1, t, t[1] == '0' ? 2 : 1);
    n1[t[1] == '0' ? 2 : 1] = '\0';
    strncpy(n2, t + (t[1] == '0' ? 2 : 1), t[1] == 0 ? len - 2 : len - 1);
    n2[t[1] == '0' ? len - 2 : len - 1] = '\0';
    printf("%d", atoi(n1) + atoi(n2));
    return 0;
}