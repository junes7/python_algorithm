#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, len;
    string st;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
        cin >> words[i];
    for (int i = 0; i < n; i++) {
        st = words[i];
        reverse(st.begin(), st.end());
        for (int j = i; j < n; j++) {
            if (st == words[j]) {
                len = words[i].size();
                cout << len << ' ' << words[i][len / 2];
                break;
            }
        }
    }
    return 0;
}