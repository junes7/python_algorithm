#include <iostream>
using namespace std;
int main(void) {
    string st;
    char ch;
    cin >> st;
    for (int i = 0; i < 26; i++) {
        ch = 65 + i;
        if (st.find(ch) == string::npos) {
            cout << ch;
            break;
        }
    }
    return 0;
}