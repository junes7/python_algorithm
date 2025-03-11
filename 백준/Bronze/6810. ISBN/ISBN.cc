#include <iostream>
using namespace std;
int main(void) {
    int s = 0, t;
    string st = "9780921418";
    for (int i = 0; i < st.size(); i++)
        s += i % 2 == 0 ? (st[i] - 48) * 1 : (st[i] - 48) * 3;
    for (int i = 0; i < 3; i++) {
        cin >> t;
        s += i % 2 == 0 ? t * 1 : t * 3;
    }
    cout << "The 1-3-sum is " << s;
    return 0;
}