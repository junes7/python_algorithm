#include <iostream>
using namespace std;
int main(void) {
    string st;
    getline(cin, st);
    for (int i = 0; i < st.size(); i++) {
        if (isalpha(st[i]) && isupper(st[i])) {
            st[i] += 32;
        }
    }
    cout << (st.find("d2") != string::npos ? "D2" : "unrated");
    return 0;
}