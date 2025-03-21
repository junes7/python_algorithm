#include <iostream>
using namespace std;
int main(void) {
    string st = "UAPC", t, s;
    cin >> s;
    for (int i = 0; i < st.size(); i++) {
        if (s.find(st[i]) == string::npos)
            t += st[i];
    }
    cout << t;
    return 0;
}