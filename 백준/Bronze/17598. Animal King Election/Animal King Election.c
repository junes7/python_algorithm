#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int cntL = 0, cntT = 0;
    char *t = (char *)malloc(sizeof(char) * 6);
    for (int i = 0; i < 9; i++) {
        scanf("%s", t);
        if (strcmp(t, "Lion") == 0)
            cntL += 1;
        else
            cntT += 1;
    }
    if (cntL >= 5)
        printf("%s", "Lion");
    else if (cntT >= 5)
        printf("%s", "Tiger");
    return 0;
}