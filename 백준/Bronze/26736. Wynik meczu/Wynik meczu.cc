#include <iostream>
using namespace std;
int main(void) {
    int cntA = 0, cntB = 0;
    string st;
    cin >> st;
    for (int i = 0; i < st.size(); i++) {
        if (st[i] == 'A')
            cntA += 1;
        else if (st[i] == 'B')
            cntB += 1;
    }
    cout << cntA << " : " << cntB;
    return 0;
}