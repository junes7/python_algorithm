#include <iostream>
using namespace std;
int main(void) {
    int t, n;
    string st;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> st;
        for (int j = 0; j < st.size(); j++) {
            if (st[j] == 'b')
                n -= 1;
            else
                n += 1;
        }
        cout << "Data Set " << i + 1 << ":\n";
        cout << n << "\n\n";
    }
    return 0;
}