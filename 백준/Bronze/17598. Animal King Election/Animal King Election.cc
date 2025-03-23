#include <iostream>
using namespace std;
int main(void) {
    int cntL = 0, cntT = 0;
    string t;
    for (int i = 0; i < 9; i++) {
        cin >> t;
        if (t == "Lion")
            cntL += 1;
        else
            cntT += 1;
    }
    if (cntL >= 5)
        cout << "Lion";
    else if (cntT >= 5)
        cout << "Tiger";
    return 0;
}