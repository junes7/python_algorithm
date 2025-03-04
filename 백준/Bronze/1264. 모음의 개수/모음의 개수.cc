#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int cnt;
    string st;
    vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
    while (getline(cin, st)) {
        if (st == "#") break;
        cnt = 0;
        for (int i = 0; i < st.size(); i++) {
            if (65 <= st[i] && st[i] <= 90) st[i] += 32;
            if (find(vowel.begin(), vowel.end(), st[i]) != vowel.end())
                cnt += 1;
        }
        cout << cnt << "\n";
    }
    return 0;
}