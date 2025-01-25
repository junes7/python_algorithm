#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int s = 0;
    char *str = (char*)malloc(sizeof(char) * 100), *temp;
    scanf("%s", str);
    temp = strtok(str, ",");
    while (temp != NULL) {
        s += atoi(temp);
        temp = strtok(NULL, ",");
    }
    printf("%d", s);
    return 0;
}