#include <iostream>
using namespace std;
int main(void) {
    int q, a, b, rlt = 0;
    bool check = true;
    cin >> q;
    while (q) {
        cin >> a >> b;
        if (a == 1)
            rlt += b;
        else if (a == 2)
            rlt -= b;
        if (rlt < 0) check = false;
        q -= 1;
    }
    cout << (check ? "See you next month" : "Adios");
    return 0;
}