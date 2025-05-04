#include <iostream>
#include <sstream>
using namespace std;
int main(void) {
    int t;
    cin >> t;
    string st;
    getline(cin, st);
    for (int i = 0; i < t; i++) {
        getline(cin, st);
        stringstream ss(st);
        while (getline(ss, st, ' ')) {
            for (int j = st.size() - 1; j >= 0; j--)
                cout << st[j];
            cout << ' ';
        }
        cout << "\n";
    }
    return 0;
}