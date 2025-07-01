#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st, a, b, c;
    cin >> st;
    int l = st.size();
    vector<string> words;
    for (int i = 1; i < l - 1; i++) {
        for (int j = i + 1; j < l; j++) {
            a = st.substr(0, i);
            b = st.substr(i, j - i);
            c = st.substr(j, l - j);
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            reverse(c.begin(), c.end());
            words.push_back(a + b + c);
        }
    }
    sort(words.begin(), words.end(), less<string>());
    cout << words[0];
    return 0;
}