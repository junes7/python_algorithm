#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t;
    double num = 0.0;
    char *temp, *st = (char *)malloc(sizeof(char) * 12);
    scanf("%d", &t);
    gets(st);
    for (int i = 0; i < t; i++) {
        gets(st);
        temp = strtok(st, " ");
        while (temp != NULL) {
            if (isdigit(temp[0])) {
                num = atof(temp);
            } else {
                if (temp[0] == '@')
                    num *= 3;
                else if (temp[0] == '%')
                    num += 5;
                else if (temp[0] == '#')
                    num -= 7;
            }
            temp = strtok(NULL, " ");
        }
        printf("%.2f\n", num);
    }
    return 0;
}