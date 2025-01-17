#include <iostream>
#include <vector>
using namespace std;

long gcd(long x, long y) {
    return x % y == 0 ? y : gcd(y, x % y);
}

int main(void) {
    long numer, denom;
    vector<vector<int>> num;
    vector<int> t;
    for (int i = 0; i < 2; i++) {
        t = {};
        cin >> numer >> denom;
        t.push_back(int(numer));
        t.push_back(int(denom));
        num.push_back(t);
    }
    numer = num[0][0] * num[1][1] + num[0][1] * num[1][0];
    denom = num[0][1] * num[1][1];
    cout << numer / gcd(numer, denom) << ' ' << denom / gcd(numer, denom);
    return 0;
}