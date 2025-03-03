#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char* s = (char*)malloc(sizeof(char) * 21);
    char*** arr = (char***)malloc(sizeof(char**) * 3);
    scanf("%s", s);
    for (int i = 0; i < 3; i++) {
        arr[i] = (char**)malloc(sizeof(char*) * 3);
        for (int j = 0; j < 3; j++) {
            arr[i][j] = (char*)malloc(sizeof(char) * 21);
            if (i == 1 && j == 1)
                sprintf(arr[i][j], "%s%s%s", ":", s, ":");
            else
                sprintf(arr[i][j], "%s", ":fan:");
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%s", arr[i][j]);
        printf("\n");
    }
    return 0;
}