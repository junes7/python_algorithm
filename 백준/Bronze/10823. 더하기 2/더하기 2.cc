#include <iostream>
#include <sstream>
using namespace std;
int main(void) {
    int n = 0;
    string st = "", s;
    while (cin >> s) {
        st += s;
    }
    stringstream ss(st);
    while (getline(ss, st, ',')) {
        n += stoi(st);
    }
    cout << n;
    return 0;
}