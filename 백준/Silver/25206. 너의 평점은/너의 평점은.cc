#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(void) {
    string sub, gra;
    double cr, cret = 0.0, gpts = 0.0;
    map<string, double> grade = {{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}};
    for (int i = 0; i < 20; i++) {
        cin >> sub >> cr >> gra;
        if (gra != "P") {
            cret += cr;
            gpts += cr * grade[gra];
        }
    }
    cout << fixed;
    cout.precision(6);
    cout << gpts / cret;
    return 0;
}