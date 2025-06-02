#include <iostream>
using namespace std;
int main(void) {
    int n, l, num = 1, cnt = 0;
    string st;
    cin >> n >> l;
    while (1) {
        st = to_string(num);
        if (st.find(to_string(l)) == string::npos) {
            cnt += 1;
            if (cnt == n) {
                cout << num;
                break;
            }
        }
        num += 1;
    }
    return 0;
}