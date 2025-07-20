#include <cctype>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st, rlt = "";
    int t;
    getline(cin, st);
    for (int i = 0; i < st.size(); i++) {
        if (isupper(st[i])) {
            t = st[i] - 38;
            rlt += t < 10 ? "0" + to_string(t) : to_string(t);
        } else if (islower(st[i])) {
            t = st[i] - 96;
            rlt += t < 10 ? "0" + to_string(t) : to_string(t);
        } else if (isdigit(st[i])) {
            t = st[i] - 48;
            rlt += "#" + to_string(t);
        } else
            rlt += st[i];
    }
    cout << rlt;
    return 0;
}