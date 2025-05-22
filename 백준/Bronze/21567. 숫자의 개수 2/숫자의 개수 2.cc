#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    string st;
    int t;
    long long rlt = 1;
    for (int i = 0; i < 3; i++) {
        cin >> t;
        rlt *= t;
    }
    st = to_string(rlt);
    for (int i = 0; i < 10; i++)
        cout << count(st.begin(), st.end(), i + 48) << "\n";
    return 0;
}