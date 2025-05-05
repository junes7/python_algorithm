#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int len, minn, maxn;
    string a, b, ta, tb;
    cin >> a >> b;
    vector<char> arra, arrb;
    len = a.size();
    for (int i = 0; i < len; i++) {
        arra.push_back(a[i]);
        arrb.push_back(b[i]);
    }
    a = "", b = "";
    for (int i = 0; i < len; i++) {
        a += arra[i] == '6' ? '5' : arra[i];
        b += arrb[i] == '6' ? '5' : arrb[i];
    }
    minn = stoi(a) + stoi(b);
    a = "", b = "";
    for (int i = 0; i < len; i++) {
        a += arra[i] == '5' ? '6' : arra[i];
        b += arrb[i] == '5' ? '6' : arrb[i];
    }
    maxn = stoi(a) + stoi(b);
    cout << minn << ' ' << maxn;
    return 0;
}