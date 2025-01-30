#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    float cre = 0.0, cret = 0.0, gpt = 0.0, grade[9] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};
    char gra[9][3] = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"}, *ch = (char*)malloc(sizeof(char) * 3), *sub = (char*)malloc(sizeof(char) * 51);
    for (int i = 0; i < 20; i++) {
        scanf("%s %f %s", sub, &cre, ch);
        for (int j = 0; j < 9; j++) {
            if (strcmp(gra[j], ch) == 0) {
                cret += cre;
                gpt += cre * grade[j];
                break;
            }
        }
    }
    printf("%.6f", gpt / cret);
    return 0;
}