#include <iostream>
using namespace std;
int main(void) {
    string st;
    int steps, s = 0;
    while (cin >> st >> steps)
        s += (st == "Es" ? 21 : 17) * steps;
    cout << s;
    return 0;
}