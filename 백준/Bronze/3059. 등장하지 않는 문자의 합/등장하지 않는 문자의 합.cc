#include <iostream>
using namespace std;
int main(void) {
    int t, rlt;
    string st;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> st;
        rlt = 0;
        for (int i = 0; i < 26; i++) {
            if (st.find(char(i + 65)) == string::npos)
                rlt += i + 65;
        }
        cout << rlt << "\n";
    }
    return 0;
}