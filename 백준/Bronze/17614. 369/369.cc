#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    string st;
    for (int i = 3; i < n + 1; i++) {
        st = to_string(i);
        cnt += count(st.begin(), st.end(), '3') + count(st.begin(), st.end(), '6') + count(st.begin(), st.end(), '9');
    }
    cout << cnt;
    return 0;
}