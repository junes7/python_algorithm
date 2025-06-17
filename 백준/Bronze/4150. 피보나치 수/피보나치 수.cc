#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
string add(string a, string b) {
    string rlt = "";
    int carry = 0, t;
    if (a.size() < b.size()) swap(a, b);
    while (a.size() > b.size()) b = '0' + b;
    for (int i = a.size() - 1; i >= 0; i--) {
        t = carry + (a[i] - 48) + (b[i] - 48);
        rlt += to_string(t % 10);
        carry = t / 10;
    }
    if (carry > 0) rlt += to_string(carry);
    reverse(rlt.begin(), rlt.end());
    return rlt;
}
string fibo(int n) {
    if (n == 1 || n == 2) return "1";
    vector<string> f(n + 1, "");
    f[1] = '1', f[2] = '1';
    for (int i = 3; i < n + 1; i++) {
        f[i] = add(f[i - 1], f[i - 2]);
    }
    return f[n];
}
int main(void) {
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}