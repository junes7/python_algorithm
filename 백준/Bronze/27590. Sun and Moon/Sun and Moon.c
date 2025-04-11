#include <stdio.h>
int main(void) {
    int ds, ys, dm, ym, sun_yr, moon_yr;
    scanf("%d %d", &ds, &ys);
    scanf("%d %d", &dm, &ym);
    sun_yr = ys - ds;
    moon_yr = ym - dm;
    while (sun_yr != moon_yr) {
        if (sun_yr < moon_yr) {
            sun_yr += ys;
        } else {
            moon_yr += ym;
        }
    }
    printf("%d", sun_yr);
    return 0;
}