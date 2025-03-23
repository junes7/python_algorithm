#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        if (st.find("S") != string::npos)
            cout << st;
    }
    return 0;
}