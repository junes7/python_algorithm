#include <iostream>
using namespace std;
int main(void) {
    string st;
    cin >> st;
    cout << (st.substr(0, 3) == "555" ? "YES" : "NO");
    return 0;
}