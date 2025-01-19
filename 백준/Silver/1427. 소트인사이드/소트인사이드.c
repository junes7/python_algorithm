#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *a, const void *b) {
    return strcmp((char *)b, (char *)a);
}
int main(void) {
    char *t = (char *)malloc(sizeof(char) * 15);
    scanf("%s", t);
    qsort(t, strlen(t), sizeof(char), compare);
    t[strlen(t)] = '\0';
    printf("%s", t);
    return 0;
}