#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    int t, h, w;
    string st;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> h >> w;
        for (int j = 0; j < h; j++) {
            cin >> st;
            reverse(st.begin(), st.end());
            cout << st << "\n";
        }
    }
    return 0;
}