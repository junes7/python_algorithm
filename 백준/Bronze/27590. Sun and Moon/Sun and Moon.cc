#include <iostream>
using namespace std;
int main(void) {
    int ds, ys, dm, ym, sun_yr, moon_yr;
    cin >> ds >> ys;
    cin >> dm >> ym;
    sun_yr = ys - ds;
    moon_yr = ym - dm;
    while (sun_yr != moon_yr) {
        if (sun_yr < moon_yr) {
            sun_yr += ys;
        } else {
            moon_yr += ym;
        }
    }
    cout << sun_yr;
    return 0;
}