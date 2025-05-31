#include <algorithm>
#include <iostream>
using namespace std;
int newNum(string num) {
    int rlt;
    while (num[num.size() - 1] == '0')
        num.erase(num.size() - 1, 1);
    reverse(num.begin(), num.end());
    rlt = stoi(num);
    return rlt;
}
int main(void) {
    int t, ans;
    string n, m;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        ans = newNum(n) + newNum(m);
        cout << newNum(to_string(ans)) << "\n";
    }
    return 0;
}