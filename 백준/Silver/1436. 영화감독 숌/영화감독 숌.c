#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, num = 666;
    char* buf = (char*)malloc(sizeof(char) * 5);
    scanf("%d", &n);
    while (n - 1) {
        num += 1;
        sprintf(buf, "%d", num);
        if (strstr(buf, "666") != NULL)
            n -= 1;
    }
    printf("%d", num);
    return 0;
}