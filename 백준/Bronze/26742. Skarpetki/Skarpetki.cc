#include <iostream>
using namespace std;
int main(void) {
    int w = 0, b = 0;
    string st;
    cin >> st;
    for (int i = 0; i < st.size(); i++) {
        if (st[i] == 'B')
            w += 1;
        else if (st[i] == 'C')
            b += 1;
    }
    cout << w / 2 + b / 2;
    return 0;
}