#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st, rlt = "";
    int i = 0;
    vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
    getline(cin, st);
    while (i < st.size()) {
        if (find(vowel.begin(), vowel.end(), st[i]) != vowel.end())
            i += 2;
        rlt += st[i++];
    }
    cout << rlt;
    return 0;
}