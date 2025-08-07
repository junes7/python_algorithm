#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st, st_cpy;
    cin >> n;
    getline(cin, st);
    for (int i = 0; i < n; i++) {
        getline(cin, st);
        for (int j = 0; j < st.size(); j++) {
            if (isalpha(st[j]) && isupper(st[j]))
                st[j] += 32;
        }
        st_cpy = st;
        reverse(st_cpy.begin(), st_cpy.end());
        cout << (st == st_cpy ? "Yes" : "No") << "\n";
    }
    return 0;
}