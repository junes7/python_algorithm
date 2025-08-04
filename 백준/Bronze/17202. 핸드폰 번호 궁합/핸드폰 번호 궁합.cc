#include <iostream>
using namespace std;
int main(void) {
    string ph1, ph2, rlt = "", tmp = "";
    cin >> ph1 >> ph2;
    for (int i = 0; i < 8; i++) {
        rlt += ph1[i];
        rlt += ph2[i];
    }
    while (rlt.size() != 2) {
        for (int i = 0; i < rlt.size() - 1; i++)
            tmp += to_string(((rlt[i] - 48) + (rlt[i + 1] - 48)) % 10);
        rlt = tmp, tmp = "";
    }
    cout << rlt;
    return 0;
}