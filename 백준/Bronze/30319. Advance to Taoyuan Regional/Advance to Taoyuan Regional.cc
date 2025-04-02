#include <iostream>
#include <sstream>
using namespace std;
int main(void) {
    int idx = 0, date[3];
    string st;
    cin >> st;
    stringstream ss(st);
    while (getline(ss, st, '-')) {
        date[idx++] = stoi(st);
    }
    if (date[1] < 9 || date[1] == 9 and date[2] <= 16) {
        cout << "GOOD";
    } else {
        cout << "TOO LATE";
    }
    return 0;
}