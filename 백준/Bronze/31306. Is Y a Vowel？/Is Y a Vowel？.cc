#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int cnt1 = 0, cnt2 = 0;
    string st;
    cin >> st;
    vector<char> vowel1 = {'a', 'e', 'i', 'o', 'u'};
    vector<char> vowel2 = {'a', 'e', 'i', 'o', 'u', 'y'};
    for (int i = 0; i < st.size(); i++) {
        if (find(vowel1.begin(), vowel1.end(), st[i]) != vowel1.end())
            cnt1 += 1;
        if (find(vowel2.begin(), vowel2.end(), st[i]) != vowel2.end())
            cnt2 += 1;
    }
    cout << cnt1 << ' ' << cnt2;
    return 0;
}