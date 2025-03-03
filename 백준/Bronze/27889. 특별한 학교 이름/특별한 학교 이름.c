#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char* s = (char*)malloc(sizeof(char) * 5);
    char abbrev[4][5] = {"NLCS", "BHA", "KIS", "SJA"};
    char fullname[4][31] = {"North London Collegiate School", "Branksome Hall Asia", "Korea International School", "St. Johnsbury Academy"};
    scanf("%s", s);
    for (int i = 0; i < 4; i++) {
        if (strcmp(abbrev[i], s) == 0) {
            printf("%s", fullname[i]);
            break;
        }
    }
    return 0;
}