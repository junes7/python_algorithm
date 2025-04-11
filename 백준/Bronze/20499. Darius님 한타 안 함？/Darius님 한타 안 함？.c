#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *temp, *st = (char *)malloc(sizeof(char) * 9);
    int idx = 0, *arr = (int *)malloc(sizeof(int) * 3);
    scanf("%s", st);
    temp = strtok(st, "/");
    while (temp != NULL) {
        arr[idx++] = atoi(temp);
        temp = strtok(NULL, "/");
    }
    printf("%s", arr[0] + arr[2] < arr[1] || arr[1] == 0 ? "hasu" : "gosu");
    return 0;
}