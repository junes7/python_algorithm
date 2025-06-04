#include <iostream>
using namespace std;
string TwoToTen(string num) {
    int n = 0, m = 1;
    for (int i = num.size() - 1; i >= 0; i--) {
        n += (num[i] - 48) * m;
        m *= 2;
    }
    return to_string(n);
}
int main(void) {
    string st, rlt = "";
    cin >> st;
    while (st.size() % 3)
        st = '0' + st;
    for (int i = 0; i < st.size() / 3; i++)
        rlt += TwoToTen(st.substr(3 * i, 3));
    cout << rlt << "\n";
    return 0;
}