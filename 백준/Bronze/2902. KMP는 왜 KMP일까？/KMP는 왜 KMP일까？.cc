#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    string st, t = "";
    cin >> st;
    stringstream ss(st);
    while (getline(ss, st, '-')) {
        t += st[0];
    }
    cout << t;
    return 0;
}