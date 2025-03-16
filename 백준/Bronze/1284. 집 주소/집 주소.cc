#include <iostream>
using namespace std;
int main(void) {
    int s;
    string st;
    while (cin >> st) {
        if (st == "0") break;
        s = 2;
        for (int i = 0; i < st.size(); i++) {
            if (st[i] - 48 == 1)
                s += 2;
            else if (st[i] - 48 == 0)
                s += 4;
            else
                s += 3;
        }
        s += (st.size() - 1);
        cout << s << "\n";
    }
    return 0;
}