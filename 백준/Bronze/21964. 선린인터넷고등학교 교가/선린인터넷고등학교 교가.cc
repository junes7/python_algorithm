#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    cin >> st;
    st = st.substr(st.size() - 5, 5);
    cout << st;
    return 0;
}