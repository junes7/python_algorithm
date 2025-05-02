#include <cctype>
#include <iostream>
using namespace std;
int main(void) {
    string st;
    getline(cin, st);
    for (int i = 0; i < st.size(); i++) {
        if (isupper(st[i]))
            st[i] += st[i] + 13 > 90 ? -13 : 13;
        else if (islower(st[i]))
            st[i] += st[i] + 13 > 122 ? -13 : 13;
    }
    cout << st;
    return 0;
}