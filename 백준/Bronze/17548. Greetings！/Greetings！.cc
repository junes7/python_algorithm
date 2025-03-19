#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st, t = "";
    cin >> st;
    t += st[0];
    for (int i = 0; i < (st.size() - 2) * 2; i++)
        t += st[1];
    t += st[st.size() - 1];
    cout << t;
    return 0;
}