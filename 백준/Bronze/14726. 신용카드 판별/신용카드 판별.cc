#include <iostream>
using namespace std;
int main(void) {
    int t, num, total;
    string st;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> st;
        total = 0;
        for (int j = 0; j < st.size(); j++) {
            num = (st[j] - 48) * ((j + 1) % 2 != 0 ? 2 : 1);
            total += num > 9 ? num / 10 + num % 10 : num;
        }
        cout << (total % 10 == 0 ? "T" : "F") << "\n";
    }
    return 0;
}