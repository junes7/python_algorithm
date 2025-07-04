#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'}, conti = {'e', 'o'};
    int cnt;
    string st;
    while (cin >> st) {
        if (st == "end") break;
        cnt = 0;
        for (int i = 0; i < st.size(); i++) {
            if (find(vowels.begin(), vowels.end(), st[i]) != vowels.end())
                cnt += 1;
        }
        if (cnt < 1) {
            cout << "<" << st << "> is not acceptable.\n";
            continue;
        }
        cnt = 1;
        if (st.size() > 2) {
            for (int i = 0; i < st.size() - 2; i++) {
                if (find(vowels.begin(), vowels.end(), st[i]) != vowels.end() &&
                    find(vowels.begin(), vowels.end(), st[i + 1]) != vowels.end() &&
                    find(vowels.begin(), vowels.end(), st[i + 2]) != vowels.end()) {
                    cnt = 0;
                    break;
                } else if (find(vowels.begin(), vowels.end(), st[i]) == vowels.end() &&
                           find(vowels.begin(), vowels.end(), st[i + 1]) == vowels.end() &&
                           find(vowels.begin(), vowels.end(), st[i + 2]) == vowels.end()) {
                    cnt = 0;
                    break;
                }
            }
        }
        if (!cnt) {
            cout << "<" << st << "> is not acceptable.\n";
            continue;
        }
        cnt = 1;
        for (int i = 0; i < st.size() - 1; i++) {
            if (st[i] == st[i + 1]) {
                if (find(conti.begin(), conti.end(), st[i]) == conti.end()) {
                    cnt = 0;
                    break;
                }
            }
        }
        cout << "<" << st << "> is " << (!cnt ? "not acceptable." : "acceptable.") << "\n";
    }
    return 0;
}