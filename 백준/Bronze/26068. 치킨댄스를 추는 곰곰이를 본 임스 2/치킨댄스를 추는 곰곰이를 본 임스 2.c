#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, cnt = 0;
    char *temp, *st = (char *)malloc(sizeof(char) * 6);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        temp = strtok(st, "-");
        while (temp != NULL) {
            if (isdigit(temp[0]) && atoi(temp) <= 90)
                cnt += 1;
            temp = strtok(NULL, "-");
        }
    }
    printf("%d", cnt);
    return 0;
}