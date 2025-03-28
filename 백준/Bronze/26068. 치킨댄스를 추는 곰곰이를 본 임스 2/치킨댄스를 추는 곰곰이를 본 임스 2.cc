#include <cctype>
#include <iostream>
#include <sstream>
using namespace std;
int main(void) {
    int n, cnt = 0;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        stringstream ss(st);
        while (getline(ss, st, '-')) {
            if (isdigit(st[0]) && stoi(st) <= 90)
                cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}