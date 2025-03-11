#include <stdio.h>
int main(void) {
    int l, r, fine;
    scanf("%d", &l);
    scanf("%d", &r);
    fine = r - l;
    if (1 <= fine && fine <= 20) {
        fine = 100;
    } else if (21 <= fine && fine <= 30) {
        fine = 270;
    } else if (31 <= fine) {
        fine = 500;
    }
    if (fine <= 0) {
        printf("Congratulations, you are within the speed limit!");
    } else {
        printf("You are speeding and your fine is $%d.", fine);
    }
    return 0;
}