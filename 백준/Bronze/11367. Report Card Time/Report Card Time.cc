#include <iostream>
using namespace std;
int main(void) {
    int n, grd;
    string name, rlt;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> grd;
        if (grd >= 97)
            rlt = "A+";
        else if (grd >= 90)
            rlt = "A";
        else if (grd >= 87)
            rlt = "B+";
        else if (grd >= 80)
            rlt = "B";
        else if (grd >= 77)
            rlt = "C+";
        else if (grd >= 70)
            rlt = "C";
        else if (grd >= 67)
            rlt = "D+";
        else if (grd >= 60)
            rlt = "D";
        else
            rlt = "F";
        cout << name << ' ' << rlt << "\n";
    }
    return 0;
}