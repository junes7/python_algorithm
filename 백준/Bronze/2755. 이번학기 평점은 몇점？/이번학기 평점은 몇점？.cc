#include <iostream>
#include <map>
using namespace std;
int main(void) {
    map<string, float> gpa = {{"A+", 4.3}, {"A0", 4.0}, {"A-", 3.7}, {"B+", 3.3}, {"B0", 3.0}, {"B-", 2.7}, {"C+", 2.3}, {"C0", 2.0}, {"C-", 1.7}, {"D+", 1.3}, {"D0", 1.0}, {"D-", 0.7}, {"F", 0.0}};
    int n, cre;
    double t_cre = 0, t_gpa = 0;
    string sub, grd;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> sub >> cre >> grd;
        t_gpa += cre * gpa[grd];
        t_cre += cre;
    }
    cout << fixed;
    cout.precision(2);
    cout << t_gpa / t_cre + 0.000000000001;
    return 0;
}