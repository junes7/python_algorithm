#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt;
    cin >> n;
    string st, st_desc;
    for (int i = 0; i < n; i++) {
        cin >> st;
        cnt = 0;
        while (st != "6174") {
            cnt += 1;
            st_desc = st;
            sort(st_desc.begin(), st_desc.end(), greater<char>());
            sort(st.begin(), st.end(), less<char>());
            st = to_string(stoi(st_desc) - stoi(st));
            if (st.size() < 4) {
                for (int i = 0; i < 4 - st.size(); i++)
                    st = "0" + st;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}