#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *name = (char *)malloc(sizeof(char) * 11);
    char *cl = (char *)malloc(sizeof(char) * 6);
    int age, weight;
    while (true) {
        scanf("%s %d %d", name, &age, &weight);
        if (strcmp(name, "#") == 0 && age == 0 && weight == 0) break;
        strcpy(cl, age > 17 || weight >= 80 ? "Senior" : "Junior");
        printf("%s %s\n", name, cl);
    }
    return 0;
}