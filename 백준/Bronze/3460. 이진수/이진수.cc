#include <iostream>
using namespace std;
string TenToTwo(int dec) {
    string bin = "";
    while (dec > 0) {
        bin += dec % 2 == 1 ? '1' : '0';
        dec /= 2;
    }
    return bin;
}
int main(void) {
    int t, n;
    string rlt;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        rlt = TenToTwo(n);
        for (int j = 0; j < rlt.size(); j++)
            if (rlt[j] == '1')
                cout << j << ' ';
        cout << "\n";
    }
    return 0;
}