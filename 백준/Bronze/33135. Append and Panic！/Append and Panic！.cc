#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    int len;
    string st;
    cin >> st;
    len = st.size();
    sort(st.begin(), st.end());
    st.erase(unique(st.begin(), st.end()), st.end());
    cout << len - st.size();
    return 0;
}