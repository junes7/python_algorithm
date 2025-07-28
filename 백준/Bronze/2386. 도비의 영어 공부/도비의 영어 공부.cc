#include <cctype>
#include <iostream>
using namespace std;
int main(void) {
    char tar;
    string st;
    int cnt;
    while (1) {
        cin >> tar;
        if (tar == '#') break;
        cnt = 0;
        getline(cin, st);
        for (int i = 0; i < st.size(); i++) {
            if (isupper(st[i]))
                st[i] += 32;
            if (st[i] == tar)
                cnt += 1;
        }
        cout << tar << ' ' << cnt << "\n";
    }
    return 0;
}