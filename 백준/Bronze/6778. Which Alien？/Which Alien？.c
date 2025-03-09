#include <stdio.h>
int main(void) {
    int ant, eyes;
    scanf("%d", &ant);
    scanf("%d", &eyes);
    if (ant >= 3 && eyes <= 4)
        printf("TroyMartian\n");
    if (ant <= 6 && eyes >= 2)
        printf("VladSaturnian\n");
    if (ant <= 2 && eyes <= 3)
        printf("GraemeMercurian\n");
    return 0;
}