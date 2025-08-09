#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, len;
    string st;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<int> cnt;
    cin >> n;
    getline(cin, st);
    for (int i = 0; i < n; i++) {
        getline(cin, st);
        cnt.assign(2, 0);
        for (int j = 0; j < st.size(); j++) {
            if (isalpha(st[j])) {
                if (isupper(st[j]))
                    st[j] += 32;
                if (find(vowels.begin(), vowels.end(), st[j]) != vowels.end())
                    cnt[1] += 1;
                else
                    cnt[0] += 1;
            }
        }
        cout << cnt[0] << ' ' << cnt[1] << "\n";
    }
    return 0;
}