#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, x, y, len;
    char *w1 = (char *)malloc(sizeof(char) * 21);
    char *w2 = (char *)malloc(sizeof(char) * 21);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s %s", w1, w2);
        len = strlen(w1);
        printf("Distances: ");
        for (int j = 0; j < len; j++) {
            x = w1[j] - 65, y = w2[j] - 65;
            printf("%d ", x <= y ? y - x : (y + 26) - x);
        }
        printf("\n");
    }
    return 0;
}