#include <iostream>
#include <sstream>
using namespace std;
int main(void) {
    int t;
    double num = 0.0;
    string st;
    cin >> t;
    getline(cin, st);
    for (int i = 0; i < t; i++) {
        getline(cin, st);
        stringstream ss(st);
        while (getline(ss, st, ' ')) {
            if (isdigit(st[0])) {
                num = stod(st);
            } else {
                if (st[0] == '@')
                    num *= 3;
                else if (st[0] == '%')
                    num += 5;
                else if (st[0] == '#')
                    num -= 7;
            }
        }
        cout << fixed;
        cout.precision(2);
        cout << num << "\n";
    }
    return 0;
}