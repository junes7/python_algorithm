#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t;
    cin >> t;
    string st, temp, rlt = "";
    bool flag;
    vector<char> alpha(t);
    vector<string> bin(t);
    for (int i = 0; i < t; i++) {
        cin >> alpha[i];
        cin >> bin[i];
    }
    cin >> st;
    for (int i = 0; i < st.size() / 4; i++) {
        temp = st.substr(4 * i, 4);
        flag = true;
        for (int j = 0; j < t; j++) {
            if (temp == bin[j]) {
                rlt += alpha[j];
                flag = false;
                break;
            }
        }
        if (flag)
            rlt += '?';
    }
    cout << rlt;
    return 0;
}