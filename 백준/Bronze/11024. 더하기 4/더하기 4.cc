#include <iostream>
#include <sstream>
using namespace std;
int main(void) {
    int t, s;
    string st;
    cin >> t;
    getline(cin, st);
    for (int i = 0; i < t; i++) {
        s = 0;
        getline(cin, st);
        stringstream ss(st);
        while (getline(ss, st, ' '))
            s += stoi(st);
        cout << s << "\n";
    }
    return 0;
}