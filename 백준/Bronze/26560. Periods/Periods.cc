#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, st);
        if (st[st.size() - 1] != '.')
            st += ".";
        cout << st << "\n";
    }
    return 0;
}