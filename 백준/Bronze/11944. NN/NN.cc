#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m;
    string st = "";
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        st += to_string(n);
    st = st.substr(0, m);
    cout << st;
    return 0;
}