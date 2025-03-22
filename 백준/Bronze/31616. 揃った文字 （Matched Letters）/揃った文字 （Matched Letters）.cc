#include <iostream>
using namespace std;
int main(void) {
    int n;
    char t;
    string st;
    cin >> n;
    cin >> st;
    t = st[0];
    for (int i = 1; i < st.size(); i++) {
        if (st[i] != t) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}