#include <iostream>
using namespace std;
int main(void) {
    string st;
    cin >> st;
    for (int i = st.size() - 1; i >= 0; i--) {
        cout << st[i];
    }
    return 0;
}