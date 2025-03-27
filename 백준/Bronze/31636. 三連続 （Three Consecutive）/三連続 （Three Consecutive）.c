#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n;
    char *temp, *st;
    scanf("%d", &n);
    st = (char *)malloc(sizeof(char) * (n + 1));
    scanf("%s", st);
    temp = strtok(st, "x");
    while (temp != NULL) {
        if (strlen(temp) >= 3) {
            printf("%s", "Yes");
            return 0;
        }
        temp = strtok(NULL, "x");
    }
    printf("%s", "No");
    return 0;
}