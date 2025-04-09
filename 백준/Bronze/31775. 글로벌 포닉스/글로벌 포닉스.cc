#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st;
    vector<char> cnt(3), abbrev = {'k', 'l', 'p'};
    for (int i = 0; i < 3; i++) {
        cin >> st;
        cnt[i] = st[0];
    }
    sort(cnt.begin(), cnt.end(), less<char>());
    cout << (abbrev == cnt ? "GLOBAL" : "PONIX");
    return 0;
}