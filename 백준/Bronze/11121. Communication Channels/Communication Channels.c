#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t;
    char *t1 = (char *)malloc(sizeof(char) * 101);
    char *t2 = (char *)malloc(sizeof(char) * 101);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s %s", t1, t2);
        printf("%s\n", strcmp(t1, t2) == 0 ? "OK" : "ERROR");
    }
    return 0;
}