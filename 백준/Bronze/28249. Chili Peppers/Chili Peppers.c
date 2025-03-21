#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, s = 0;
    scanf("%d", &n);
    char *st = (char *)malloc(sizeof(char) * 9);
    char pepper[6][9] = {"Poblano", "Mirasol", "Serrano", "Cayenne", "Thai", "Habanero"};
    int pepper_num[6] = {1500, 6000, 15500, 40000, 75000, 125000};
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        for (int j = 0; j < 6; j++) {
            if (strcmp(st, pepper[j]) == 0) {
                s += pepper_num[j];
                break;
            }
        }
    }
    printf("%d", s);
    return 0;
}