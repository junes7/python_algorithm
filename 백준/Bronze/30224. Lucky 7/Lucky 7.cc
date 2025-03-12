#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    st = to_string(n);
    if (st.find("7") == string::npos and n % 7 != 0)
        cout << 0;
    else if (st.find("7") == string::npos and n % 7 == 0)
        cout << 1;
    if (st.find("7") != string::npos and n % 7 != 0)
        cout << 2;
    else if (st.find("7") != string::npos and n % 7 == 0)
        cout << 3;
    return 0;
}