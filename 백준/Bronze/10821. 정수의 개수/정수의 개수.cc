#include <iostream>
#include <sstream>
using namespace std;
int main(void) {
    int cnt = 0;
    string st = "";
    cin >> st;
    stringstream ss(st);
    while (getline(ss, st, ',')) {
        if (st != "")
            cnt += 1;
    }
    cout << cnt;
    return 0;
}